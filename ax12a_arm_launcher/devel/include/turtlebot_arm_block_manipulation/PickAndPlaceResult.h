// Generated by gencpp from file turtlebot_arm_block_manipulation/PickAndPlaceResult.msg
// DO NOT EDIT!


#ifndef TURTLEBOT_ARM_BLOCK_MANIPULATION_MESSAGE_PICKANDPLACERESULT_H
#define TURTLEBOT_ARM_BLOCK_MANIPULATION_MESSAGE_PICKANDPLACERESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlebot_arm_block_manipulation
{
template <class ContainerAllocator>
struct PickAndPlaceResult_
{
  typedef PickAndPlaceResult_<ContainerAllocator> Type;

  PickAndPlaceResult_()
    {
    }
  PickAndPlaceResult_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator> const> ConstPtr;

}; // struct PickAndPlaceResult_

typedef ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<std::allocator<void> > PickAndPlaceResult;

typedef boost::shared_ptr< ::turtlebot_arm_block_manipulation::PickAndPlaceResult > PickAndPlaceResultPtr;
typedef boost::shared_ptr< ::turtlebot_arm_block_manipulation::PickAndPlaceResult const> PickAndPlaceResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlebot_arm_block_manipulation

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'turtlebot_arm_block_manipulation': ['/home/turtlebot/ultimate/devel/share/turtlebot_arm_block_manipulation/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot_arm_block_manipulation/PickAndPlaceResult";
  }

  static const char* value(const ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
";
  }

  static const char* value(const ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PickAndPlaceResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::turtlebot_arm_block_manipulation::PickAndPlaceResult_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT_ARM_BLOCK_MANIPULATION_MESSAGE_PICKANDPLACERESULT_H
