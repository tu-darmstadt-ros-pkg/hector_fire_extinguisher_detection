#include <ros/ros.h>
#include <hector_fire_extinguisher_detection/hector_fire_extinguisher_detection.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "hector_fire_extinguisher_detection_node");
  ROS_INFO("Starting Hector Fire Extinguisher Detection Node");
  ros::NodeHandle nh("");
  ros::NodeHandle p_nh("~");
  hector_fire_extinguisher_detection::FireExtinguisherDetection FireExtinguisherDetection(nh,p_nh);
  ros::spin();
  exit(0);

}
