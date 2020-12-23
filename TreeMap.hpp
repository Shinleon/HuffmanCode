#include <string>
#include "TreeNode.hpp"

// Avl tree of character as key and int as value
// will have int align with index 
namespace AvlTree
{

  class TreeMap
  {
    private:
      int size;
      AvlTree::TreeNode** root;

    public:
      TreeMap();
      void clear();
      bool containsKey(std::string key);
      int put(std::string key, int value);
      int get(std::string key);
      int remove(std::string key);
      std::string toString();
  };
}