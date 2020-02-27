// Generated by gencpp from file nist_gear/LogicalCameraImage.msg
// DO NOT EDIT!


#ifndef NIST_GEAR_MESSAGE_LOGICALCAMERAIMAGE_H
#define NIST_GEAR_MESSAGE_LOGICALCAMERAIMAGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nist_gear/Model.h>
#include <geometry_msgs/Pose.h>

namespace nist_gear
{
template <class ContainerAllocator>
struct LogicalCameraImage_
{
  typedef LogicalCameraImage_<ContainerAllocator> Type;

  LogicalCameraImage_()
    : models()
    , pose()  {
    }
  LogicalCameraImage_(const ContainerAllocator& _alloc)
    : models(_alloc)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::nist_gear::Model_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::nist_gear::Model_<ContainerAllocator> >::other >  _models_type;
  _models_type models;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::nist_gear::LogicalCameraImage_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nist_gear::LogicalCameraImage_<ContainerAllocator> const> ConstPtr;

}; // struct LogicalCameraImage_

typedef ::nist_gear::LogicalCameraImage_<std::allocator<void> > LogicalCameraImage;

typedef boost::shared_ptr< ::nist_gear::LogicalCameraImage > LogicalCameraImagePtr;
typedef boost::shared_ptr< ::nist_gear::LogicalCameraImage const> LogicalCameraImageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nist_gear::LogicalCameraImage_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nist_gear::LogicalCameraImage_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nist_gear

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'nist_gear': ['/home/gents/ariac2020/ws/src/ARIAC/nist_gear/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nist_gear::LogicalCameraImage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nist_gear::LogicalCameraImage_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nist_gear::LogicalCameraImage_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nist_gear::LogicalCameraImage_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nist_gear::LogicalCameraImage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nist_gear::LogicalCameraImage_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nist_gear::LogicalCameraImage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8d82d9667c3484c611dd31e2f750668a";
  }

  static const char* value(const ::nist_gear::LogicalCameraImage_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8d82d9667c3484c6ULL;
  static const uint64_t static_value2 = 0x11dd31e2f750668aULL;
};

template<class ContainerAllocator>
struct DataType< ::nist_gear::LogicalCameraImage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nist_gear/LogicalCameraImage";
  }

  static const char* value(const ::nist_gear::LogicalCameraImage_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nist_gear::LogicalCameraImage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Logical camera image message\n"
"Model[] models                  # models detected (poses in the frame of the camera)\n"
"geometry_msgs/Pose pose         # camera pose\n"
"\n"
"================================================================================\n"
"MSG: nist_gear/Model\n"
"string type                     # model type\n"
"geometry_msgs/Pose pose         # model pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::nist_gear::LogicalCameraImage_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nist_gear::LogicalCameraImage_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.models);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LogicalCameraImage_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nist_gear::LogicalCameraImage_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nist_gear::LogicalCameraImage_<ContainerAllocator>& v)
  {
    s << indent << "models[]" << std::endl;
    for (size_t i = 0; i < v.models.size(); ++i)
    {
      s << indent << "  models[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::nist_gear::Model_<ContainerAllocator> >::stream(s, indent + "    ", v.models[i]);
    }
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIST_GEAR_MESSAGE_LOGICALCAMERAIMAGE_H
