#include <climits>
#include <iostream>

int main() {
  int smallest = INT_MAX;
  int index = -1;
  int marks[5] = {67, 68, 69, 1, 71};
  for (int i = 0; i < 5; i++) {
    if (smallest > marks[i]) {
      smallest = marks[i];
      index = i;
    }
  }
  std::cout << smallest;
  std::cout << index;

  return 0;
}
