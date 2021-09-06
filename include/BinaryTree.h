#ifndef BINARY_TREE
#define BINARY_TREE

#include <string>
#include "TreeNode.h"

class BinaryTree {
  public:
    // Construtor padrão de BinaryTree
    BinaryTree();
    // Destrutor de BinaryTree
    ~BinaryTree();

    // Insere um novo elemento (chave + dado) na árvore
    void insert(std::string key, std::string data);

    // Remove um elemento da árvore a partir da chave
    void remove(std::string key);

    // Remove todos os elementos da árvore
    void clear();
    // Imprime os elementos da árvore usando caminhamento in-ordem
    void print();

  private:
    // Método auxiliar recursivo para a inserção de um novo elemento
    void recursiveInsert(TreeNode* &node, std::string key, std::string data);
    // Método auxiliar recursivo para a remoção de um elemento
    void recursiveRemove(TreeNode* &node, std::string key);
    // Método auxiliar recursivo para a deleção de elementos no método clear
    void recursiveDelete(TreeNode* node);

    // Método auxiliar para remover um elemento e substitui-lo pelo seu antecessor na árvore
    void predecessor(TreeNode* node, TreeNode* &aux);

    // Método auxiliar para realizar a impressão de elemetnos com caminhamento in-ordem
    void inOrderPrint(TreeNode* node, int* nodesPrinted);
    
    TreeNode* root;
    int size;
};

#endif
