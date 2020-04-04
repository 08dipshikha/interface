cmake_minimum_required(VERSION 2.8.3)
project(interface)

add_compile_options(-std=c++11)


find_package(catkin REQUIRED COMPONENTS
  
  geometry_msgs
  nav_msgs
  roscpp
  rospy
  std_msgs
  tf
  dynamic_reconfigure
  move_base_msgs
  actionlib_msgs
  
  

)


catkin_package(
  INCLUDE_DIRS include
  CATKIN_DEPENDS
    
    geometry_msgs
    nav_msgs
    roscpp
    rospy
    std_msgs
    tf
    move_base_msgs
    actionlib_msgs
)
###########
## Build ##
###########

include_directories(
  ${catkin_INCLUDE_DIRS}
  ${PROJECT_SOURCE_DIR}/include/interface
)



add_executable(interface_test
  src/compInter.cpp

)

target_link_libraries(interface_test
  ${catkin_LIBRARIES}
)






