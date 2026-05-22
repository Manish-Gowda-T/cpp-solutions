#include <iostream>
using namespace std;

int Binary2decimal(int binNum) {
  int power = 1;
  int answer = 0;
  while (binNum > 0) {
    int remainder = binNum % 10;
    answer += remainder * power;
    binNum /= 10;
    power *= 2;
  }
  return answer;
}

int main() {
  int binNum;
  cout << "Enter the binary value for which u want to know the decimal : ";
  std::cin >> binNum;
  int binNum_answer = Binary2decimal(binNum);
  std::cout << binNum_answer;
  return 0;
}
