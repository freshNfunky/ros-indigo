**install Instructions**

you need to install a lot of packages to build this target.

compile with:

./src/catkin/bin/catkin_make_isolated --install -DCMAKE_BUILD_TYPE=Release

Install Packages like:
Eigen
PCL
QT4
OpenCV
libogg
theora


and more...
with Homebrew

fix CMakeList.txt in: /robot_model/collada_parser/:
line 21: find_package(COLLADA_DOM 2.4 COMPONENTS 1.5)
                                    ^
fix CMakeList.txt in: /perception_pcl/pcl_ros/:
with this patch: https://github.com/mikepurvis/ros-install-osx/issues/12
