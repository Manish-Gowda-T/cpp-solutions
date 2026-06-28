#include <iostream>
using namespace std;

int digit_count(int n){
    int digit =0;
    while (n > 0){
        digit++;
        n /=10;
    }
    return digit;
}

void armstrong_number_checker(int n , int count,int original){
    int answer =0;
    while(n > 0){
        int last_digit= n%10;
        int power =1;
        for(int i =0 ; i < count ; i++){
            power *=last_digit;
        }
        answer += power;
        n /=10;
    }
    if(answer == original){
        cout<<"Number is Armstrong !";
    }
    else{
        cout<<"Number is Non-Armstrong !";
    }
    
}



int main (){
    int x,original,count;
    cout<<"Enter the input integer : ";
    cin >> x;
    original =x;
    count = digit_count(x);
    armstrong_number_checker(x,count,original);

    
}