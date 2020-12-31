#include <string>
#include <iostream>
#include "PriorityNode.hpp"

namespace Huffman
{
  PriorityNode combine(const PriorityNode& lhs, const PriorityNode& rhs)
  {
    long ret_freq = lhs.getFrequency() + rhs.getFrequency();
    PriorityNode ret = PriorityNode("", ret_freq);
    ret.setLeft(lhs);
    ret.setRight(rhs);
    return ret;
  }

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