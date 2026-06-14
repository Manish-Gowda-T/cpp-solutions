#include <iostream>
#include <vector>
using namespace std;

void printvec(vector<int> &manish) {
  for (int val : manish) {
    cout << val << " ";
  }
  cout << endl;
}

int main() {
  vector<int> manish = {1, 2, 3, 4, 5, 6, 7, 8};
  int left = 0;
  int right = manish.size() - 1;
  cout << "The original vector is : ";
  printvec(manish);
  while (left < right) {
    swap(manish[left], manish[right]);
    left++;
    right--;
  }
  cout << "The reversed vector is : ";
  printvec(manish);
  return 0;
}
