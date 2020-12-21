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
    this->left = nullptr;
    this->right = nullptr;
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

  void TreeNode::setLeft(TreeNode* l)
  {
    this->left = l;
  }

  TreeNode* TreeNode::getLeft()
  {
    return this->left;
  }
  
  void TreeNode::setRight(TreeNode* r)
  {
    this->right = r;
  }

  TreeNode* TreeNode::getRight()
  {
    return this->right;
  }
  
  std::string TreeNode::toString()
  {
    std::string ret = "Data: " + this->data;
    ret += ", Index: " + std::to_string(this->index) + " {";
    if(this->left != nullptr)
    {
      ret += "Left: " + this->left->toString() + " ";
    }
    if(this->right != nullptr)
    {
      ret += "Right: " + this->right->toString();
    }
    return ret + "}";
  }
}

#include <iostream>
int main()
{
  AvlTree::TreeNode* m = new AvlTree::TreeNode("hello", 2);
  AvlTree::TreeNode* m_l = new AvlTree::TreeNode("hellno", 2);
  m->setLeft(m_l);
  std::cout << (*m).toString() + "\n"; 
  delete m;
  delete m_l;
  std::cout << std::string("hello").compare(std::string("no"));
  return 0;
}