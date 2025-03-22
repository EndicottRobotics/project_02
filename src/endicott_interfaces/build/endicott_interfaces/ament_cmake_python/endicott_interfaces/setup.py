from setuptools import find_packages
from setuptools import setup

setup(
    name='endicott_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('endicott_interfaces', 'endicott_interfaces.*')),
)
