#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> manish = {1, 2, 3, 4, 5, 6, 7, 8};
  int target = 6;
  int index = 0;
  int found = false;
  for (int val : manish) {
    if (val == target) {
      cout << "Target found" << endl;
      cout << "its index : " << index;
      found = true;
    }
    index++;
  }
  if (found != true) {
    cout << "Target doesnt exist ";
  }
  return 0;
}
