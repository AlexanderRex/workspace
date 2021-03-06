// Generated by gencpp from file my_service/AddStrs.msg
// DO NOT EDIT!


#ifndef MY_SERVICE_MESSAGE_ADDSTRS_H
#define MY_SERVICE_MESSAGE_ADDSTRS_H

#include <ros/service_traits.h>


#include <my_service/AddStrsRequest.h>
#include <my_service/AddStrsResponse.h>


namespace my_service
{

struct AddStrs
{

typedef AddStrsRequest Request;
typedef AddStrsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddStrs
} // namespace my_service


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::my_service::AddStrs > {
  static const char* value()
  {
    return "d8ca4ab69fad67fcd8906ca3e09c53af";
  }

  static const char* value(const ::my_service::AddStrs&) { return value(); }
};

template<>
struct DataType< ::my_service::AddStrs > {
  static const char* value()
  {
    return "my_service/AddStrs";
  }

  static const char* value(const ::my_service::AddStrs&) { return value(); }
};


// service_traits::MD5Sum< ::my_service::AddStrsRequest> should match
// service_traits::MD5Sum< ::my_service::AddStrs >
template<>
struct MD5Sum< ::my_service::AddStrsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::my_service::AddStrs >::value();
  }
  static const char* value(const ::my_service::AddStrsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::my_service::AddStrsRequest> should match
// service_traits::DataType< ::my_service::AddStrs >
template<>
struct DataType< ::my_service::AddStrsRequest>
{
  static const char* value()
  {
    return DataType< ::my_service::AddStrs >::value();
  }
  static const char* value(const ::my_service::AddStrsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::my_service::AddStrsResponse> should match
// service_traits::MD5Sum< ::my_service::AddStrs >
template<>
struct MD5Sum< ::my_service::AddStrsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::my_service::AddStrs >::value();
  }
  static const char* value(const ::my_service::AddStrsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::my_service::AddStrsResponse> should match
// service_traits::DataType< ::my_service::AddStrs >
template<>
struct DataType< ::my_service::AddStrsResponse>
{
  static const char* value()
  {
    return DataType< ::my_service::AddStrs >::value();
  }
  static const char* value(const ::my_service::AddStrsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MY_SERVICE_MESSAGE_ADDSTRS_H
