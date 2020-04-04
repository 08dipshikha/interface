#ifndef  COMPINTERFACE_H
#define COMPINTERFACE_H

/** 
 * @brief includes the abstract class defined
 */

#include "interface.h"

#include <geometry_msgs/PoseArray.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>
#include <string>

typedef geometry_msgs::PoseArray PoseArray;
typedef geometry_msgs::Pose Pose;
typedef geometry_msgs::Twist Twist;
  /**
   * @class Test
   * @brief A test class to check abstract class methods
   */

class Test : public AinterfaceComputation
{
    public:
    /**
       * @brief  Constructor for the Test
       * @return
    */
        Test();
        /**
       * @brief  Destructor for the Test
       * @return
    */
        ~Test();

    //using AinterfaceComputation::initializeComputations;
	void initializeComputations(PoseArray& array_msg, Pose& robo, Pose& goal) override;
    std::string getClassName() override;
    Pose sendTransformations(Pose& source, Pose& target);    
    Twist computeVelocity();
    private:
        PoseArray m_arrayMsg;
        Pose m_robotPose;
        Pose m_goalPose;

};
#endif
