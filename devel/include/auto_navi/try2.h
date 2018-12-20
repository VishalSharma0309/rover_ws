// Generated by gencpp from file auto_navi/try2.msg
// DO NOT EDIT!


#ifndef AUTO_NAVI_MESSAGE_TRY2_H
#define AUTO_NAVI_MESSAGE_TRY2_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace auto_navi
{
template <class ContainerAllocator>
struct try2_
{
  typedef try2_<ContainerAllocator> Type;

  try2_()
    : forward_speed(0)
    , backward_speed(0)  {
    }
  try2_(const ContainerAllocator& _alloc)
    : forward_speed(0)
    , backward_speed(0)  {
  (void)_alloc;
    }



   typedef int64_t _forward_speed_type;
  _forward_speed_type forward_speed;

   typedef int64_t _backward_speed_type;
  _backward_speed_type backward_speed;





  typedef boost::shared_ptr< ::auto_navi::try2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::auto_navi::try2_<ContainerAllocator> const> ConstPtr;

}; // struct try2_

typedef ::auto_navi::try2_<std::allocator<void> > try2;

typedef boost::shared_ptr< ::auto_navi::try2 > try2Ptr;
typedef boost::shared_ptr< ::auto_navi::try2 const> try2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::auto_navi::try2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::auto_navi::try2_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace auto_navi

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'auto_navi': ['/home/hit_ter/rover_ws/src/auto_navi/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::auto_navi::try2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::auto_navi::try2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::auto_navi::try2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::auto_navi::try2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::auto_navi::try2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::auto_navi::try2_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::auto_navi::try2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a699297f96ff3ce6d6e9694c1dea07b8";
  }

  static const char* value(const ::auto_navi::try2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa699297f96ff3ce6ULL;
  static const uint64_t static_value2 = 0xd6e9694c1dea07b8ULL;
};

template<class ContainerAllocator>
struct DataType< ::auto_navi::try2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "auto_navi/try2";
  }

  static const char* value(const ::auto_navi::try2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::auto_navi::try2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 forward_speed\n\
int64 backward_speed\n\
";
  }

  static const char* value(const ::auto_navi::try2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::auto_navi::try2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.forward_speed);
      stream.next(m.backward_speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct try2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::auto_navi::try2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::auto_navi::try2_<ContainerAllocator>& v)
  {
    s << indent << "forward_speed: ";
    Printer<int64_t>::stream(s, indent + "  ", v.forward_speed);
    s << indent << "backward_speed: ";
    Printer<int64_t>::stream(s, indent + "  ", v.backward_speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTO_NAVI_MESSAGE_TRY2_H