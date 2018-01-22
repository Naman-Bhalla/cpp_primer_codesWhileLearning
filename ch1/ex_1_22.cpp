//
// Created by Naman Bhalla on 22/01/18.
//

#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item book;
  Sales_item output;

  while (std::cin >> book) {
    output += book;
  }

  std::cout << output << std::endl;

  return 0;
}