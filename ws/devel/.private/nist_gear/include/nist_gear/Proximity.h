// Generated by gencpp from file nist_gear/Proximity.msg
// DO NOT EDIT!


#ifndef NIST_GEAR_MESSAGE_PROXIMITY_H
#define NIST_GEAR_MESSAGE_PROXIMITY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace nist_gear
{
template <class ContainerAllocator>
struct Proximity_
{
  typedef Proximity_<ContainerAllocator> Type;

  Proximity_()
    : header()
    , object_detected(false)
    , min_range(0.0)
    , max_range(0.0)  {
    }
  Proximity_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , object_detected(false)
    , min_range(0.0)
    , max_range(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _object_detected_type;
  _object_detected_type object_detected;

   typedef float _min_range_type;
  _min_range_type min_range;

   typedef float _max_range_type;
  _max_range_type max_range;





  typedef boost::shared_ptr< ::nist_gear::Proximity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nist_gear::Proximity_<ContainerAllocator> const> ConstPtr;

}; // struct Proximity_

typedef ::nist_gear::Proximity_<std::allocator<void> > Proximity;

typedef boost::shared_ptr< ::nist_gear::Proximity > ProximityPtr;
typedef boost::shared_ptr< ::nist_gear::Proximity const> ProximityConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nist_gear::Proximity_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nist_gear::Proximity_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nist_gear

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'nist_gear': ['/home/gents/ariac2020/ws/src/ARIAC/nist_gear/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nist_gear::Proximity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nist_gear::Proximity_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nist_gear::Proximity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nist_gear::Proximity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nist_gear::Proximity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nist_gear::Proximity_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nist_gear::Proximity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7ba3dd0f5ec6df7b148eb145074dcc63";
  }

  static const char* value(const ::nist_gear::Proximity_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7ba3dd0f5ec6df7bULL;
  static const uint64_t static_value2 = 0x148eb145074dcc63ULL;
};

template<class ContainerAllocator>
struct DataType< ::nist_gear::Proximity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nist_gear/Proximity";
  }

  static const char* value(const ::nist_gear::Proximity_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nist_gear::Proximity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Single reading from a binary proximity sensor that detects the presence of\n"
"# objects within its sensing range.\n"
"Header header           # timestamp in the header is the time the sensor\n"
"                        # returned the sensor reading\n"
"bool object_detected    # is there something in the proximity of the sensor?\n"
"float32 min_range       # minimum range value [m]\n"
"float32 max_range       # maximum range value [m]\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::nist_gear::Proximity_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nist_gear::Proximity_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.object_detected);
      stream.next(m.min_range);
      stream.next(m.max_range);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Proximity_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nist_gear::Proximity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nist_gear::Proximity_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "object_detected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.object_detected);
    s << indent << "min_range: ";
    Printer<float>::stream(s, indent + "  ", v.min_range);
    s << indent << "max_range: ";
    Printer<float>::stream(s, indent + "  ", v.max_range);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIST_GEAR_MESSAGE_PROXIMITY_H
