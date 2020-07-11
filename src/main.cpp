#include <mymath.h>

#include <iostream>

int main() {
  std::cout << mymath::sub(20, mymath::add(10, 20)) << std::endl;

  return 0;
}