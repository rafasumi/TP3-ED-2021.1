#ifndef NODE
#define NODE

#include <string>

class Node {
  protected:
    // Construtor padrão de Node. Foi pensado para ser usado pelas subclasses
    Node() {
      key = "";
    }

    // Construtor de Node que seta o valor de key. Foi pensado para ser usado pelas subclasses
    Node(std::string key) {
      this->key = key;
    }

    std::string key;
};

#endif
