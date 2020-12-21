#include <string>

#ifndef TREENODE
#define TREENODE

namespace AvlTree
{
  class TreeNode
  {
    private:
      std::string data;
      int index;
      TreeNode* left;
      TreeNode* right;
      
    public:
      //constructor
      TreeNode(std::string data, int index); 
      std::string getData();
      int getIndex();
      void setData(std::string data);
      void setIndex(int index);
      void setLeft(TreeNode* l);
      TreeNode* getLeft();
      void setRight(TreeNode* r);
      TreeNode* getRight();
      std::string toString();
  };

}

#endif