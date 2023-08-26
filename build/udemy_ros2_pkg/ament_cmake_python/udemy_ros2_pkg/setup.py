from setuptools import find_packages
from setuptools import setup

setup(
    name='udemy_ros2_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('udemy_ros2_pkg', 'udemy_ros2_pkg.*')),
)
