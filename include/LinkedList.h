#ifndef LINKED_LIST
#define LINKED_LIST

#include "LinkedNode.h"

class LinkedList {
  public:
    LinkedList();
    ~LinkedList();

    void push(std::string data);
    void clear();

    int calculateSum();

  private:
    LinkedNode* first;
    LinkedNode* last;

    int binaryToDecimal(std::string binary);
};

#endif
