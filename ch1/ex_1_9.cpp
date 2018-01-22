//
// Created by Naman Bhalla on 22/01/18.
//

#include <iostream>

int main() {
  int val = 50, sum = 0;

  while (val <= 100) {
    sum += val;
    ++val;
  }

  std::cout << "Sum of 50 to 100 (both inclusive) is " << sum << std::endl;

  return 0;
}