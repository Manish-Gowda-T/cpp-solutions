#include <iostream>
using namespace std;

int decNum(int num) {
  int answer = 0;
  int power = 1;
  int remainder;
  while (num > 0) {
    remainder = num % 2;
    num = num / 2;
    answer += (remainder * power);
    power = power * 10;
  }
  return answer;
}

int main() {
  int num;
  std::cout << "Enter the number for which u have to find the binary "
               "representation: ";
  std::cin >> num;
  int Binary_representation = decNum(num);
  std::cout << Binary_representation;
}
