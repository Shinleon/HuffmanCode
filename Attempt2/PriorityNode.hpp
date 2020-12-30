#include <string>

namespace Huffman
{
  class PriorityNode
  {
    private:
      std::string key; // The character sequence to compress
      long frequency;  // The frequency of the character sequence
      PriorityNode* left;
      PriorityNode* right;
    
    public:
      PriorityNode(std::string k, long f): frequency(f), key(k){};
      bool operator > (const PriorityNode& rhs) const;
      bool operator < (const PriorityNode& rhs) const;
      bool operator <=(const PriorityNode& rhs) const;
      bool operator >=(const PriorityNode& rhs) const;
      bool operator ==(const PriorityNode& rhs) const;
  };
}