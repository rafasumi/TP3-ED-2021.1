#include "BinaryTree.h"
#include <iostream>

BinaryTree::BinaryTree() {
  root = nullptr;
}

BinaryTree::~BinaryTree() {
  clear();
}

void BinaryTree::insert(std::string key, std::string data) {
  recursiveInsert(root, key, data);
}

void BinaryTree::recursiveInsert(TreeNode* &node, std::string key, std::string data) {
  if (node == nullptr) {
    node = new TreeNode(key, data);
  } else {
    if (key < node->key) 
      recursiveInsert(node->left, key, data);
    else if (key > node->key)
      recursiveInsert(node->right, key, data);
    else
      node->data.push(data);
  }
}

void BinaryTree::remove(std::string key) {
  recursiveRemove(root, key);
  std::cout << std::endl;
}

void BinaryTree::recursiveRemove(TreeNode* &node, std::string key) {
  if (node == nullptr)
    return;

  if (key < node->key)
    recursiveRemove(node->left, key);
  else if (key > node->key) 
    recursiveRemove(node->right, key);
  else {
    TreeNode* aux;
    std::cout << node->key << " " << node->data.calculateSum();
    
    if (node->right == nullptr) {
      aux = node;
      node = node->left;
      delete aux;
    } else if (node->left == nullptr) {
      aux = node;
      node = node->right;
      delete aux;
    } else
      predecessor(node, node->left);
  }
}

void BinaryTree::predecessor(TreeNode* node, TreeNode* &aux) {
  if (aux->right != nullptr) {
    predecessor(node, aux->right);
    return;
  }

  node->key = aux->key;
  node = aux;
  aux = aux->left;
  delete node;
}

void BinaryTree::clear() {
  recursiveDelete(root);
  root = nullptr;
}

void BinaryTree::recursiveDelete(TreeNode* node) {
  if (node != nullptr) {
    recursiveDelete(node->left);
    recursiveDelete(node->right);
    delete node;
  }
}

void BinaryTree::print() {
  inOrderPrint(root);
  std::cout << std::endl;
}

void BinaryTree::inOrderPrint(TreeNode* node) {
  if (node != nullptr) {
    inOrderPrint(node->left);
    std::cout << node->key << " ";
    inOrderPrint(node->right);
  }
}
