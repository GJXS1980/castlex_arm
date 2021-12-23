// Generated by gencpp from file object_detect/object_result_msg.msg
// DO NOT EDIT!


#ifndef OBJECT_DETECT_MESSAGE_OBJECT_RESULT_MSG_H
#define OBJECT_DETECT_MESSAGE_OBJECT_RESULT_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace object_detect
{
template <class ContainerAllocator>
struct object_result_msg_
{
  typedef object_result_msg_<ContainerAllocator> Type;

  object_result_msg_()
    : data()  {
      data.assign(0.0);
  }
  object_result_msg_(const ContainerAllocator& _alloc)
    : data()  {
  (void)_alloc;
      data.assign(0.0);
  }



   typedef boost::array<double, 3>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::object_detect::object_result_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::object_detect::object_result_msg_<ContainerAllocator> const> ConstPtr;

}; // struct object_result_msg_

typedef ::object_detect::object_result_msg_<std::allocator<void> > object_result_msg;

typedef boost::shared_ptr< ::object_detect::object_result_msg > object_result_msgPtr;
typedef boost::shared_ptr< ::object_detect::object_result_msg const> object_result_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::object_detect::object_result_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::object_detect::object_result_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace object_detect

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'object_detect': ['/home/castle/cbot/src/object_detect/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::object_detect::object_result_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_detect::object_result_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_detect::object_result_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_detect::object_result_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_detect::object_result_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_detect::object_result_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::object_detect::object_result_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e5f22fe4305d5ac2ab458767e6127819";
  }

  static const char* value(const ::object_detect::object_result_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe5f22fe4305d5ac2ULL;
  static const uint64_t static_value2 = 0xab458767e6127819ULL;
};

template<class ContainerAllocator>
struct DataType< ::object_detect::object_result_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "object_detect/object_result_msg";
  }

  static const char* value(const ::object_detect::object_result_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::object_detect::object_result_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[3] data          # actual matrix data, size is (step * rows)\n\
\n\
\n\
";
  }

  static const char* value(const ::object_detect::object_result_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::object_detect::object_result_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct object_result_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::object_detect::object_result_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::object_detect::object_result_msg_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OBJECT_DETECT_MESSAGE_OBJECT_RESULT_MSG_H