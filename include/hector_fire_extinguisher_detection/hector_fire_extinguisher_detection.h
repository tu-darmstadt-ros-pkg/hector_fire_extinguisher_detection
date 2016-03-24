#ifndef HECTOR_FIRE_EXTINGUISHER_DETECTION_H
#define HECTOR_FIRE_EXTINGUISHER_DETECTION_H

#include <ros/ros.h>
#include <std_msgs/Bool.h>

namespace hector_fire_extinguisher_detection{

class FireExtinguisherDetection {

    public:
      FireExtinguisherDetection(ros::NodeHandle& nh, ros::NodeHandle& p_nh );
      virtual ~FireExtinguisherDetection();



    protected:


    private:
    ros::Publisher pcl_debug_pub_;

    };
}



#endif // DARIAS_PCL_PROCESSING_H
