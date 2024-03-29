// Generated by gencpp from file de01_action/AddIntsGoal.msg
// DO NOT EDIT!


#ifndef DE01_ACTION_MESSAGE_ADDINTSGOAL_H
#define DE01_ACTION_MESSAGE_ADDINTSGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace de01_action
{
template <class ContainerAllocator>
struct AddIntsGoal_
{
  typedef AddIntsGoal_<ContainerAllocator> Type;

  AddIntsGoal_()
    : num(0)  {
    }
  AddIntsGoal_(const ContainerAllocator& _alloc)
    : num(0)  {
  (void)_alloc;
    }



   typedef int32_t _num_type;
  _num_type num;





  typedef boost::shared_ptr< ::de01_action::AddIntsGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::de01_action::AddIntsGoal_<ContainerAllocator> const> ConstPtr;

}; // struct AddIntsGoal_

typedef ::de01_action::AddIntsGoal_<std::allocator<void> > AddIntsGoal;

typedef boost::shared_ptr< ::de01_action::AddIntsGoal > AddIntsGoalPtr;
typedef boost::shared_ptr< ::de01_action::AddIntsGoal const> AddIntsGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::de01_action::AddIntsGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::de01_action::AddIntsGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::de01_action::AddIntsGoal_<ContainerAllocator1> & lhs, const ::de01_action::AddIntsGoal_<ContainerAllocator2> & rhs)
{
  return lhs.num == rhs.num;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::de01_action::AddIntsGoal_<ContainerAllocator1> & lhs, const ::de01_action::AddIntsGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace de01_action

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::de01_action::AddIntsGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::de01_action::AddIntsGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::de01_action::AddIntsGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::de01_action::AddIntsGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::de01_action::AddIntsGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::de01_action::AddIntsGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::de01_action::AddIntsGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "54b3c80efd6fae6e6ffff8a4b9facd69";
  }

  static const char* value(const ::de01_action::AddIntsGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x54b3c80efd6fae6eULL;
  static const uint64_t static_value2 = 0x6ffff8a4b9facd69ULL;
};

template<class ContainerAllocator>
struct DataType< ::de01_action::AddIntsGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "de01_action/AddIntsGoal";
  }

  static const char* value(const ::de01_action::AddIntsGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::de01_action::AddIntsGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#目标值\n"
"int32 num\n"
;
  }

  static const char* value(const ::de01_action::AddIntsGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::de01_action::AddIntsGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.num);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddIntsGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::de01_action::AddIntsGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::de01_action::AddIntsGoal_<ContainerAllocator>& v)
  {
    s << indent << "num: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DE01_ACTION_MESSAGE_ADDINTSGOAL_H
