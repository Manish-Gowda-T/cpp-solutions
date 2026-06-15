#include <iostream>
using namespace std;

void arrayinput(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }
  cout << endl;
}

void printarray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void printsubarray(int array[], int size) {
  for (int start = 0; start < size; start++) {
    for (int end = start; end < size; end++) {
      for (int i = start; i <= end; i++) {
        cout << array[i];
      }
      cout << " ";
    }
    cout << endl;
  }
}

int main() {
  int size;
  cout << "Enter the size of the array : ";
  cin >> size;
  int *array = new int[size];
  cout << "Enter the inputs of the array : ";
  arrayinput(array, size);
  cout << "The enteres array is: ";
  printarray(array, size);
  cout << "All the subarray's of the main array is : " << "\n";
  printsubarray(array, size);

  return 0;
}
