#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
  first = new LinkedNode();
  last = first;
}

LinkedList::~LinkedList() {
  clear();
  delete first;
}

void LinkedList::push(std::string data) {
  LinkedNode* newNode = new LinkedNode(data);

  last->next = newNode;
  last = newNode;
}

void LinkedList::clear() {
  LinkedNode* aux = first->next;
  while (aux != nullptr) {
    first->next = aux->next;
    delete aux;
    aux = first->next;
  }

  last = first;
}

int LinkedList::calculateSum() {
  LinkedNode* aux = first->next;
  int sum = 0;
  while (aux != nullptr) {
    sum += binaryToDecimal(aux->key);
    aux = aux->next;
  }

  return sum;
}

int LinkedList::binaryToDecimal(std::string binary) {
  int size = binary.size();
  int multiplier = 1;
  int decimal = 0;
  int intValue; 

  for (int i = size - 1; i >= 0; i--) {
    intValue = binary[i] - '0';
    decimal += intValue * multiplier;
    multiplier *= 2;
  }

  return decimal;
}

LinkedList& LinkedList::operator = (const LinkedList& node) {
  this->clear();
  
  LinkedNode* aux = node.first->next;
  while (aux != nullptr) {
    this->push(aux->key);
    aux = aux->next;
  }

  return *this;
}
