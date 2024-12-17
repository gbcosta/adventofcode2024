#include "challenges.h"
#include <fstream>
#include <iostream>

void day2_1() {
  std::ifstream file("./input.txt");

  if (!file) {
    std::cerr << "error to open the file" << std::endl;
  }

  file.close();
}
