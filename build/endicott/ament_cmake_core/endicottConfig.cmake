# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_endicott_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED endicott_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(endicott_FOUND FALSE)
  elseif(NOT endicott_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(endicott_FOUND FALSE)
  endif()
  return()
endif()
set(_endicott_CONFIG_INCLUDED TRUE)

# output package information
if(NOT endicott_FIND_QUIETLY)
  message(STATUS "Found endicott: 0.0.0 (${endicott_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'endicott' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${endicott_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(endicott_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${endicott_DIR}/${_extra}")
endforeach()
