#include <string>
#include <iostream>
#include <memory>
#include "PriorityNode.hpp"

namespace Huffman
{
  PriorityNode combine(const std::shared_ptr<PriorityNode> lhs, 
       const std::shared_ptr<PriorityNode> rhs) {
     long ret_freq = lhs->getFrequency() + rhs->getFrequency();
     PriorityNode ret = PriorityNode("", ret_freq);
     ret.setLeft(lhs);
     ret.setRight(rhs);
     return ret;
   };


  bool operator > (const PriorityNode& lhs, const PriorityNode& rhs)
  {
    return lhs.getFrequency() > rhs.getFrequency();
  }

  bool operator < (const PriorityNode& lhs, const PriorityNode& rhs)
  {
    return lhs.getFrequency() < rhs.getFrequency();
  }

  bool operator >= (const PriorityNode& lhs, const PriorityNode& rhs)
  {
    return lhs.getFrequency() >= rhs.getFrequency();
  }

  bool operator <= (const PriorityNode& lhs, const PriorityNode& rhs)
  {
    return lhs.getFrequency() <= rhs.getFrequency();
  }

  bool operator == (const PriorityNode& lhs, const PriorityNode& rhs)
  {
    return lhs.getFrequency() == rhs.getFrequency();
  }

  std::ostream& operator <<(std::ostream& strm, const PriorityNode& toStr)
  {
    return strm << "Freq: " << toStr.getFrequency() << " \'" << toStr.getKey() << "\' ";
  }
}