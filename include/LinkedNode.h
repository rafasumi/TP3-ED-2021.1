#ifndef LINKED_NODE
#define LINKED_NODE

#include "Node.h"

class LinkedNode : private Node {
  public:
    LinkedNode(): Node() {
      next = nullptr;
    }

    LinkedNode(std::string key): Node(key) {
      next = nullptr;
    }

  private:
    LinkedNode* next;
  
  friend class LinkedList;  
};

#endif
