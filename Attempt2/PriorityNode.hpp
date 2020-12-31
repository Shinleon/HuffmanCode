#include <string>
#include <cstdlib>

#ifndef PRIORITY_NODE
#define PRIORITY_NODE

namespace Huffman
{
  class PriorityNode
  {
    private:
      std::string key; // The character sequence to compress
      long frequency = 0;  // The frequency of the character sequence
      PriorityNode* left = (PriorityNode*)malloc(sizeof(PriorityNode));
      PriorityNode* right = (PriorityNode*)malloc(sizeof(PriorityNode));
    
    public:
      //Defined

      PriorityNode(std::string k, long f): frequency(f), key(k){};
      std::string getKey() const{ return key;}
      long getFrequency() const{ return frequency;}
      void setLeft(const PriorityNode& left){*this->left = left;}
      void setRight(const PriorityNode& right){*this->right = right;}
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