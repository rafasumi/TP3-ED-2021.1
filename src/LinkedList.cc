#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
  size = 0;
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

  size++;
}

void LinkedList::clear() {
  LinkedNode* aux = first->next;
  while (aux != nullptr) {
    first->next = aux->next;
    delete aux;
    aux = first->next;
  }

  size = 0;
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
  int base = 1;
  int decimal = 0;
  int intValue; 
  
  for (int i = size - 1; i >= 0; i--) {
    intValue = binary[i] - '0';
    decimal += intValue * base;
    base *= 2;
  }

  return decimal;
}