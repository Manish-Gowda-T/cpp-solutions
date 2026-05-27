#include <iostream>

int ReverseNumber(int n) {
  int answer = 0;
  while (n > 0) {
    int digit = n % 10;
    answer = answer * 10 + digit;
    n /= 10;
  }
  return answer;
}

int main() {
  int number, answer;
  std::cout << "Enter the Number: ";
  std::cin >> number;
  answer = ReverseNumber(number);
  std::cout << "The reverse order of the string (" << number
            << ") is:" << answer;
  return 0;
}
