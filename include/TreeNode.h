#ifndef TREE_NODE
#define TREE_NODE

#include <string>
#include "Node.h"
#include "LinkedList.h"

class TreeNode : private Node {
  public:
    TreeNode(): Node() {
      left = nullptr;
      right = nullptr;
    }

    TreeNode(std::string key, std::string data): Node(key) {
      left = nullptr;
      right = nullptr;
      this->data.push(data);
    }

  private:
    TreeNode* left;
    TreeNode* right;
    LinkedList data;

  friend class BinaryTree;
};

#endif
