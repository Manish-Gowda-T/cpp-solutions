#include <iostream>

void Checker_function(int x) {
  if (x > 0 && ((x & (x - 1)) == 0)) {
    std::cout << "The given Number is a power of 2! ";
  } else {
    std::cout << "The given number is not a power of 2! ";
  }
}

int main() {
  int x;
  std::cout << "Enter the number: ";
  std::cin >> x;
  Checker_function(x);
  return 0;
}
