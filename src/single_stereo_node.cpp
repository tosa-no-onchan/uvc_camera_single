#include <ros/ros.h>
#include <nodelet/loader.h>

#include "uvc_camera/single_stereocamera.h"

int main (int argc, char **argv) {
  ros::init(argc, argv, "uvc_camera_stereo");

  uvc_camera::Single_StereoCamera stereo(ros::NodeHandle(), ros::NodeHandle("~"));

  ros::spin();
  return 0;
}

