#include "ros/ros.h"
#include "my_service/AddStrs.h"

bool add(my_service::AddStrs::Request &req,
        my_service::AddStrs::Response &res)
{
  res.sum = req.first + req.second;
  ROS_INFO("request: first = %s, second = %s",req.first,req.second);
  ROS_INFO("sending back responce:[%s]",res.sum);
  return true;
}

int main(int argc, char **argv)
{
    ros::init(argc,argv,"add_two_strs_server");
    ros::NodeHandle n;
    
    ros::ServiceServer service = n.advertiseService("add_two_strs",add);
    ROS_INFO("Ready to add two strings.");
    ros::spin();
    
    return 0;
}
