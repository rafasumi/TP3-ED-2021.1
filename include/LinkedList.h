#ifndef LINKED_LIST
#define LINKED_LIST

#include "LinkedNode.h"

class LinkedList {
  public:
    // Construtor padrão de LinkedList
    LinkedList();
    // Destrutor de LinkedList
    ~LinkedList();

    // Insere um novo elemento na lista encadeada
    void push(std::string data);
    // Remove todos os elementos da lista
    void clear();

    // Calcula a soma dos números binários contidos na lista
    int calculateSum();

    // Sobrescrita do operador de atribuição para a classe LinkedList
    LinkedList& operator = (const LinkedList& node);
  private:
    LinkedNode* first;
    LinkedNode* last;

    // Calcula o valor decimal de um número binário
    int binaryToDecimal(std::string binary);
};

#endif
