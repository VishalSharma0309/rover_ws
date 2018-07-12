// Generated by gencpp from file katana_msgs/JointMovementResult.msg
// DO NOT EDIT!


#ifndef KATANA_MSGS_MESSAGE_JOINTMOVEMENTRESULT_H
#define KATANA_MSGS_MESSAGE_JOINTMOVEMENTRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace katana_msgs
{
template <class ContainerAllocator>
struct JointMovementResult_
{
  typedef JointMovementResult_<ContainerAllocator> Type;

  JointMovementResult_()
    {
    }
  JointMovementResult_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::katana_msgs::JointMovementResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::katana_msgs::JointMovementResult_<ContainerAllocator> const> ConstPtr;

}; // struct JointMovementResult_

typedef ::katana_msgs::JointMovementResult_<std::allocator<void> > JointMovementResult;

typedef boost::shared_ptr< ::katana_msgs::JointMovementResult > JointMovementResultPtr;
typedef boost::shared_ptr< ::katana_msgs::JointMovementResult const> JointMovementResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::katana_msgs::JointMovementResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::katana_msgs::JointMovementResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace katana_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'katana_msgs': ['/home/hit_ter/rover_ws/src/katana_driver/katana_msgs/msg', '/home/hit_ter/rover_ws/devel/share/katana_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::katana_msgs::JointMovementResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::katana_msgs::JointMovementResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::katana_msgs::JointMovementResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::katana_msgs::JointMovementResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::katana_msgs::JointMovementResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::katana_msgs::JointMovementResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::katana_msgs::JointMovementResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::katana_msgs::JointMovementResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::katana_msgs::JointMovementResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "katana_msgs/JointMovementResult";
  }

  static const char* value(const ::katana_msgs::JointMovementResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::katana_msgs::JointMovementResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
";
  }

  static const char* value(const ::katana_msgs::JointMovementResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::katana_msgs::JointMovementResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointMovementResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::katana_msgs::JointMovementResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::katana_msgs::JointMovementResult_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KATANA_MSGS_MESSAGE_JOINTMOVEMENTRESULT_H