#ifndef NODE
#define NODE

#include <string>

class Node {
  protected:
    Node() {
      key = "";
    }

    Node(std::string key) {
      this->key = key;
    }

    std::string key;
};

#endif
