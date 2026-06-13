// The above code is a 2 pointer approach

#include <iostream>
using namespace std;

void printarr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

void reverse_arr(int arr[], int size) {
  int start = 0;
  int end = size - 1;
  while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main() {
  int size;
  cout << "enter the size of the array: ";
  cin >> size;
  int *arr = new int[size];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  cout << "The original Array is : ";
  printarr(arr, size);
  reverse_arr(arr, size);
  cout << endl;
  cout << "The Reversed Array is : ";
  printarr(arr, size);
}
