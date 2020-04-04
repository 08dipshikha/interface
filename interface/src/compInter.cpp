#include <ros/ros.h>
#include <iostream>
#include <string>
#include <compinterface.h>


typedef geometry_msgs::PoseArray PoseArray;
typedef geometry_msgs::Pose Pose;
typedef geometry_msgs::Twist Twist;

    /**
       * @brief  Constructor for the Test
       * @return
    */
Test::Test()
{
    initializeComputations(m_arrayMsg, m_robotPose, m_goalPose);
    std::cout << getClassName() << std::endl;
    sendTransformations(m_robotPose,m_goalPose);
    computeVelocity();
}
    /**
       * @brief  Destructor for the Test
       * @return
    */
   
Test::~Test() {}

void Test::initializeComputations(PoseArray& array_msg, Pose& robo, Pose& goal)
{
    std::cout << "initialize\n";
}

Pose Test::sendTransformations(Pose& source, Pose& target)
{
    Pose* p_pose = new Pose;
    std::cout << "sendTrans\n";
    return *p_pose;
}

Twist Test::computeVelocity()
{
    Twist* p_twist = new Twist;
    std::cout << "CMD\n";
    return *p_twist;
}   

std::string Test::getClassName()
{
    return "Test";
}

int main()
{
    Test t;
    return 0;
}
