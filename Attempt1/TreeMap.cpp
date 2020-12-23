#include <string>
#include <iostream>

#include "TreeNode.hpp"
#include "TreeMap.hpp"

namespace AvlTree
{
  TreeMap::TreeMap()
  {
    this->size = 0;
    this->root = (TreeNode**)malloc(sizeof(TreeNode**));
    *(this->root) = nullptr;
  }
  
  void TreeMap::clear()
  {
    this->size = 0;
    this->root = new TreeNode*;
  }

  bool TreeMap::containsKey(std::string key)
  {
    return false;
  }

  int TreeMap::put(std::string key, int value)
  {
    TreeNode** ref = this->root;
    TreeNode* curr = *ref;
    while(curr != nullptr)
    {
      std::string currData = curr->getData();
      if(key.compare(currData) < 0)
      {
        ref = (*ref)->getLeft();
        curr = *ref;
      }
      else if (key.compare(currData) > 0)
      {
        ref = (*ref)->getRight();
        curr = *ref;
      }
      else
      {
        int ret = curr->getIndex();
        curr->setIndex(value);
        return ret;
      }
    }

    TreeNode* create = new TreeNode(key, value);
    *ref = create;
    return value;
  }

  std::string TreeMap::toString()
  {
    return (*(this->root))->toString();
  }
}

int main()
{
  AvlTree::TreeMap* x = new AvlTree::TreeMap();
  x->put("hello", 2);
  x->put("oh no", 4);
  x->put("hi", 3);
  x->put("a", 1);
  std::cout << x->toString() + "\n";
}