// Generated by gencpp from file learning_service/PersonResponse.msg
// DO NOT EDIT!


#ifndef LEARNING_SERVICE_MESSAGE_PERSONRESPONSE_H
#define LEARNING_SERVICE_MESSAGE_PERSONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace learning_service
{
template <class ContainerAllocator>
struct PersonResponse_
{
  typedef PersonResponse_<ContainerAllocator> Type;

  PersonResponse_()
    : result()  {
    }
  PersonResponse_(const ContainerAllocator& _alloc)
    : result(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::learning_service::PersonResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::learning_service::PersonResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PersonResponse_

typedef ::learning_service::PersonResponse_<std::allocator<void> > PersonResponse;

typedef boost::shared_ptr< ::learning_service::PersonResponse > PersonResponsePtr;
typedef boost::shared_ptr< ::learning_service::PersonResponse const> PersonResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::learning_service::PersonResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::learning_service::PersonResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::learning_service::PersonResponse_<ContainerAllocator1> & lhs, const ::learning_service::PersonResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::learning_service::PersonResponse_<ContainerAllocator1> & lhs, const ::learning_service::PersonResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace learning_service

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::learning_service::PersonResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::learning_service::PersonResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::learning_service::PersonResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::learning_service::PersonResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::learning_service::PersonResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::learning_service::PersonResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::learning_service::PersonResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c22f2a1ed8654a0b365f1bb3f7ff2c0f";
  }

  static const char* value(const ::learning_service::PersonResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc22f2a1ed8654a0bULL;
  static const uint64_t static_value2 = 0x365f1bb3f7ff2c0fULL;
};

template<class ContainerAllocator>
struct DataType< ::learning_service::PersonResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "learning_service/PersonResponse";
  }

  static const char* value(const ::learning_service::PersonResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::learning_service::PersonResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string result\n"
"\n"
"\n"
"\n"
"\n"
;
  }

  static const char* value(const ::learning_service::PersonResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::learning_service::PersonResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PersonResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::learning_service::PersonResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::learning_service::PersonResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LEARNING_SERVICE_MESSAGE_PERSONRESPONSE_H
