#ifndef  INTERFACE_H
#define INTERFACE_H

#include <geometry_msgs/PoseArray.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>
#include <string>

typedef geometry_msgs::PoseArray PoseArray;
typedef geometry_msgs::Pose Pose;
typedef geometry_msgs::Twist Twist;

  /**
   * @class AinterfaceComputation
   * @brief An interface the trajectory controller uses to interact
   */
class AinterfaceComputation
{
      
    public:
    /**
       * @brief  Subclass will implement this method to initialize the parameters needful for computation
       * @param  poses_array The poses obtained from the local planner
       * @param  robot_pose The pose of the robot in /map frame
       * @param  goal_pose The pose of the final goal in /map frame
       * @return void since does the
       */

        virtual void initializeComputations(PoseArray& poses_array, Pose& robot_pose, Pose& goal_pose) = 0;
    /**
       * @brief  Subclass will implement this method to obtain the transformation between two frames
       * @param  source The source frame from which to be transformed
       * @param  target The frame in which the source needs to be transformed
       * @return transformed pose
       */

        virtual Pose sendTransformations(Pose& source, Pose& target) = 0; 
    /**
       * @brief  Subclass will implement this method to compute the command velocity
       * @return the appropriate linear and angular velocities computed
       */
    
        virtual Twist computeVelocity() = 0;
    /**
       * @brief  Dummy test class to get class names
       * @return a string
       */

        virtual std::string getClassName() = 0;

    /**
    * @brief  Subclass will implement a destructor
    */

        virtual ~AinterfaceComputation(){}

    protected:
      AinterfaceComputation(){}
};

#endif
