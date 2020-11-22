#include "ros/ros.h"
#include "my_service/AddStrs.h"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
ros::init(argc,argv,"add_strs_publisher");

ros::NodeHandle n;
ros::ServiceClient client=n.serviceClient<my_service::AddStrs>("add_two_strs");
my_service::AddStrs srv;

while (ros::ok()){
 std::string a,b;
 std::cout << "input the first stringer: ";
 std::cin >> a;
 std::cout << "input the second stringer: ";
 std::cin >> b;
 
 srv.request.first = a;
 srv.request.second = b;

 if(client.call(srv)){
 	std::cout << "sum =" << srv.response.sum << std::endl;
 }
 else{
 	std::cout << "Failed to call service add_two_strs" << std::endl;
 return 1;
 }
}
return 0;
}
