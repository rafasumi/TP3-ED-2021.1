#ifndef BINARY_TREE
#define BINARY_TREE

#include <string>
#include "TreeNode.h"

class BinaryTree {
  public:
    BinaryTree();
    ~BinaryTree();

    void insert(std::string key, std::string data);
  
    void remove(std::string key);

    void clear();
    void print();

  private:
    void recursiveInsert(TreeNode* &node, std::string key, std::string data);
    void recursiveRemove(TreeNode* &node, std::string key);
    void recursiveDelete(TreeNode* node);

    void predecessor(TreeNode* node, TreeNode* &aux);

    void inOrderPrint(TreeNode* node, int* nodesPrinted);
    
    TreeNode* root;
    int size;
};

#endif
