#include <string>
#include <cstdlib>
#include <memory>

#ifndef PRIORITY_NODE
#define PRIORITY_NODE

namespace Huffman
{
  class PriorityNode
  {
    private:
      std::string key; // The character sequence to compress
      long frequency = 0;  // The frequency of the character sequence
      std::shared_ptr<PriorityNode> left;
      std::shared_ptr<PriorityNode> right;
    
    public:
      //Defined

      PriorityNode(std::string k, long f): frequency(f), key(k){};
      std::string getKey() const{ return key;}
      long getFrequency() const{ return frequency;}
      void setLeft(const std::shared_ptr<PriorityNode> left){this->left = left;}
      void setRight(const std::shared_ptr<PriorityNode> right){this->right = right;}
      PriorityNode& getLeft() const{ return *left;}
      PriorityNode& getRight() const{ return *right;}

      //Un-Defined

      friend PriorityNode combine(const PriorityNode& lhs, const PriorityNode& rhs);
      friend bool operator > (const PriorityNode& lhs, const PriorityNode& rhs);
      friend bool operator < (const PriorityNode& lhs, const PriorityNode& rhs);
      friend bool operator <=(const PriorityNode& lhs, const PriorityNode& rhs);
      friend bool operator >=(const PriorityNode& lhs, const PriorityNode& rhs);
      friend bool operator ==(const PriorityNode& lhs, const PriorityNode& rhs);
      friend std::ostream& operator <<(std::ostream& strm, const PriorityNode& toStr);
  };
}

#endif