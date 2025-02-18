#include <cstdio> // Standard Input and Output Library
#include "rclcpp/rclcpp.hpp"
#include "turtlesim/msg/pose.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <cmath>
#include <memory>
#include <stdexcept>

class GotoNode : public rclcpp::Node {
public:
  GotoNode() : Node("goto_node") {
    velocity_publisher_ = create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
    pose_subscription_  = create_subscription<turtlesim::msg::Pose>(
        "/turtle1/pose", 10, std::bind(&GotoNode::pose_callback, this, std::placeholders::_1));
    target_x_ = 0.0;
    target_y_ = 0.0;
    tolerance_ = 0.1;
  }

  void set_target(double x, double y) {
    target_x_ = x;
    target_y_ = y;
    move_to_target();
  }

  bool at_target(){
    return(!moving_);
  }

private:
  void pose_callback(const turtlesim::msg::Pose::SharedPtr msg) {
    current_x_ = msg->x;
    current_y_ = msg->y;
    current_theta_ = msg->theta;
    if (moving_) {
        move_to_target();
    }
  }

  void move_to_target() {
    if (!moving_) {
        moving_ = true;
    }
    double distance_to_target = std::sqrt(std::pow(target_x_ - current_x_, 2) + std::pow(target_y_ - current_y_, 2));
    if (distance_to_target > tolerance_) {
      double angle_to_target = std::atan2(target_y_ - current_y_, target_x_ - current_x_);
      double angular_error = angle_to_target - current_theta_;
      if (std::fabs(angular_error) > 0.1) {
          rotate_turtle(angular_error);
      } else {
          move_forward(distance_to_target);
      }
    } else {
      stop_turtle();
      moving_ = false;
      RCLCPP_INFO(this->get_logger(), "Reached target: x=%.2f, y=%.2f", target_x_, target_y_);
    }
  }

  void rotate_turtle(double angular_error) {
        geometry_msgs::msg::Twist twist_msg;
        twist_msg.angular.z = angular_error;
        velocity_publisher_->publish(twist_msg);
    }

  void move_forward(double distance) {
    geometry_msgs::msg::Twist twist_msg;
    twist_msg.linear.x = distance;
    velocity_publisher_->publish(twist_msg);
  }

  void stop_turtle() {
    geometry_msgs::msg::Twist twist_msg;
    velocity_publisher_->publish(twist_msg);
  }

  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
  rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr pose_subscription_;
  double target_x_;
  double target_y_;
  double current_x_;
  double current_y_;
  double current_theta_;
  double tolerance_;
  bool moving_ = false;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto goto_node = std::make_shared<GotoNode>();

  double target_x, target_y;
  while (true) {
    std::cout << "Enter target x coordinate (or 'q' to quit): ";
    if (!(std::cin >> target_x)) {
        break;
    }
    std::cout << "Enter target y coordinate: ";
     if (!(std::cin >> target_y)) {
        break;
    }
   goto_node->set_target(target_x, target_y);
   while(goto_node->at_target() == false){
        rclcpp::spin_some(goto_node);
   }
  }
  rclcpp::shutdown();
  return 0;
}