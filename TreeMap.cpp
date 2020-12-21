#include <string>

#include "TreeNode.hpp"
#include "TreeMap.hpp"

namespace AvlTree
{
  TreeMap::TreeMap()
  {
    this->size = 0;
    this->root = nullptr;
  }
  
  void TreeMap::clear()
  {
    this->size = 0;
    this->root = nullptr;
  }

  bool containsKey(std::string key)
  {
    return false;
  }

  int TreeMap::put(std::string key, int value)
  {
    TreeNode* curr = this->root;
    while(curr != nullptr)
    {
      if(key.compare(curr->getData()) == 0)
      {
        int ret = curr->getIndex();
        curr->setIndex(value);
        return ret;
      }
      else if(key.compare(curr->getData()) < 0)
      {
        curr = curr->getLeft();
      }
      else
      {
        curr = curr->getRight();
      }
    }
  }
}