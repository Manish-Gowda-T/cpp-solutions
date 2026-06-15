#include <iostream>
#include <vector>
using namespace std;

vector<int> two_pair_finder(vector<int> nums, int target) {
  vector<int> result;
  int n = nums.size();
  int i = 0, j = n - 1;
  while (i < j) {
    int sum = nums[i] + nums[j];
    if (sum > target) {
      j--;
    } else if (sum < target) {
      i++;
    } else {
      result.push_back(i);
      result.push_back(j);
      return result;
    }
  }
  return result;
}

int main() {
  vector<int> array = {1, 2, 3, 4, 5};
  int target;
  cout << "Enter the target : ";
  cin >> target;
  vector<int> answer = two_pair_finder(array, target);
  cout << "First index : " << answer[0] << " and " << answer[1];
}
