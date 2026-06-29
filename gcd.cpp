#include<iostream>
using namespace std;

void gcd(int num1,int num2){
    for(int i=min(num1,num2); i > 0;i-- ){
        if(num1 % i ==0 && num2 % i ==0){
                 cout<<i<<endl;
                 break;
        }
    }
}

void euclidian_algorithm(int a,int b){
    while(b !=0){
        int temp =b;
        b = a % b;
        a=temp;
    }
    cout<<a<<endl;
}

int main(){
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    gcd(num1,num2);
    euclidian_algorithm(num1,num2);
}