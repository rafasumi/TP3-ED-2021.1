#ifndef LINKED_NODE
#define LINKED_NODE

#include "Node.h"

class LinkedNode : private Node {
  public:
    // Construtor padrão de LinkedNode. Chama o construtor da superclasse
    LinkedNode(): Node() {
      next = nullptr;
    }

    // Construtor de LinkedNode que seta o valor de key. Chama o construtor da superclasse
    LinkedNode(std::string key): Node(key) {
      next = nullptr;
    }

  private:
    LinkedNode* next;
  
  friend class LinkedList;  
};

#endif
