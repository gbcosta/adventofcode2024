#include "challenges.h"
#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <ostream>
#include <vector>

void day1_1() {
  std::ifstream file("./input.txt");

  if (!file) {
    std::cerr << "error to open the file" << std::endl;
  }

  std::vector<int> left;
  std::vector<int> right;

  int n;
  bool leftCol = true;

  while (file >> n) {
    if (leftCol) {
      left.push_back(n);
      leftCol = !leftCol;
    } else {

      leftCol = !leftCol;
      right.push_back(n);
    }
  }

  std::sort(left.begin(), left.end());
  std::sort(right.begin(), right.end());

  int result = 0;

  for (size_t i = 0; i < left.size(); i++) {
    result += std::abs(left[i] - right[i]);
  }

  std::cout << result << std::endl;

  file.close();
}

void day1_2() {
  std::ifstream file("./input.txt");

  if (!file) {
    std::cerr << "error to open the file" << std::endl;
  }

  std::vector<int> left;
  std::vector<int> right;

  int n;
  bool leftCol = true;

  while (file >> n) {
    if (leftCol) {
      left.push_back(n);
      leftCol = !leftCol;
    } else {

      leftCol = !leftCol;
      right.push_back(n);
    }
  }

  int result = 0;
  int similarityScore = 0;

  for (int leftNumber : left) {
    similarityScore = 0;
    for (int rightNumber : right) {
      if (leftNumber == rightNumber) {
        similarityScore++;
      }
    }
    result += similarityScore * leftNumber;
  }

  std::cout << result << std::endl;
  file.close();
}
