#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

void part1() {
  std::ifstream file("./input.txt");

  if (!file) {
    std::cerr << "error to open the file" << std::endl;
  }

  std::string line;
  std::vector<int> left;
  std::vector<int> right;

  while (std::getline(file, line)) {
    bool first = true;
    for (char c : line) {
      if (!std::isspace(c) && first) {
        left.push_back(c - '0');

        first = false;
      } else if (!std::isspace(c)) {
        right.push_back(c - '0');
      }
    }
  }

  for (int n : right) {
    std::cout << n << " ";
  }

  file.close();
}
