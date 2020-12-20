#include <string>

#include "TreeNode.hpp"

namespace AvlTree
{
  //currently we are in the namespace
  // but otherwise, the method declaration would be
  //return_type Namespace::Class::Method(parameters){ method_body }
  TreeNode::TreeNode(std::string data, int index)
  {
    this->data = data;
    this->index = index;
  }

  std::string TreeNode::getData()
  {
    return this->data;
  }

  int TreeNode::getIndex()
  {
    return this->index;
  }

  void TreeNode::setData(std::string data)
  {
    this->data = data;
  }

  void TreeNode::setIndex(int index)
  {
    this->index = index;
  }
  
  std::string TreeNode::toString()
  {
    return "Data: " + this->data + ", Index: " + std::to_string(this->index);
  }
}

#include <iostream>
int main()
{
  AvlTree::TreeNode m = AvlTree::TreeNode("hello", 2);
  std::cout << m.toString() + "\n"; 
  return 0;
}