//
// Created by Naman Bhalla on 22/01/18.
//

#include <iostream>

int main() {
  int value = 0, sum = 0;

  while (std::cin >> value) {
    sum += value;
  }

  std::cout << "Sum of entered values is " << sum << std::endl;

  return 0;
}