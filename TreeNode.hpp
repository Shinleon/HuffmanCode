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
      
    public:
      TreeNode(std::string data, int index); //constructor
      std::string getData();
      int getIndex();
      void setData(std::string data);
      void setIndex(int index);
      std::string toString();
  };

}

#endif