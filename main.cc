#include <iostream>
#include "config.h"
#include "mymath.h"

int main() {
  std::cout << "Hello, World!" << std::endl;
  std::cout << "Major: " << VERSION_MAJOR << std::endl;
  std::cout << "Minor: " << VERSION_MINOR << std::endl;

  std::cout << "Add: " << add(1, 2) << std::endl; // 3
  return 0;
}