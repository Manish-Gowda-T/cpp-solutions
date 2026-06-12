#include <climits>
#include <iostream>

int main() {
  int largest = INT_MIN;
  int index = -1;
  int size_array;
  std::cout << "Enter the size of the array: ";
  std::cin >> size_array;
  int *marks = new int[size_array];
  std::cout << "Enter the elements of array: ";
  for (int i = 0; i < size_array; i++) {
    std::cin >> marks[i];
  }

  for (int i = 0; i < size_array; i++) {
    if (largest < marks[i]) {
      largest = marks[i];
      index = i;
    }
  }
  std::cout << "largest :" << largest << std::endl;
  std::cout << "Its Index :" << index;

  return 0;
}
