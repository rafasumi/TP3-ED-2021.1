#include <fstream>
#include <string>
#include <cstring>
#include "BinaryTree.h"

// Função main do programa. Faz a leitura do arquivo, fazendo o número de inserções especificados na primeira linha do arquivo.
// Depois disso, realiza as operações de "busca e envio" (remoção) especificadas nas linhas subsequentes
int main(int argc, char const *argv[]) {
  std::ifstream inputFile(argv[1]);
  std::string insertionsQty;

  getline (inputFile, insertionsQty);
  int n = stoi(insertionsQty);

  BinaryTree tree;

  std::string line;
  std::string key, data;
  const char* delim = " ";
  for (int i = 0; i < n; i++) {
    getline (inputFile, line);
    key = std::strtok(const_cast<char*>(line.c_str()), delim);
    data = std::strtok(NULL, delim);

    tree.insert(key, data);
  }

  tree.print();
  
  while (getline (inputFile, line)) {
    tree.remove(line);
  }
  
  tree.print();

  inputFile.close();

  return 0;
}
