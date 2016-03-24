#include <ros/ros.h>
#include <hector_fire_extinguisher_detection/hector_fire_extinguisher_detection.h>
#include <iostream>

namespace hector_fire_extinguisher_detection{
    FireExtinguisherDetection::FireExtinguisherDetection(ros::NodeHandle &nh, ros::NodeHandle &p_nh)
    {
        ROS_INFO("Wir sind im Objekt der Klasse Fire Extinguisher");

        pcl_debug_pub_ = nh.advertise<std_msgs::Bool>("hector_fire_extinguisher_detection",0);
        sleep(1);
        std_msgs::Bool message;
        message.data = true;
        pcl_debug_pub_.publish(message);

    }


    FireExtinguisherDetection::~FireExtinguisherDetection()
    {}



}

