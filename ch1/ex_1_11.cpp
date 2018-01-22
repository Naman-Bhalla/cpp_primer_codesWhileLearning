//
// Created by Naman Bhalla on 22/01/18.
//

#include <iostream>

int main() {
  int start = 0, end = 0;

  std::cin >> start >> end;

  int number = start;

  while (number < end) {
    std::cout << number << std::endl;
    ++number;
  }

  return 0;
}