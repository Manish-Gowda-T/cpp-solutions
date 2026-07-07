#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void array_maker(vector<int>& array,int n){
   int val;
   cout<<"enter the elements of the array : ";
   while(n--){
      cin>>val;
      array.push_back(val);
   }
}

void largest_val(vector <int>& array, int n){
   int largest=INT_MIN;
   int index = -1;
   for(int i=0 ; i <n ; i++){
      if(array[i]>largest){
         largest=array[i];
         index=i;
      }
   }
   cout<<"The largest val is : "<<largest<<endl;
   cout<<"Its index is : "<<index<<endl;
}


void largest_2nd_val(vector <int>& array,int n ){
   if(n <2){
      cout<<"No second largest ";
      return;
   }
   int largest=array[0];
   int second_largest=INT_MIN;
   for(int i =1; i <n ; i++){
      if(array[i] > largest ){
         second_largest=largest;
         largest=array[i];
      }
      else if( array[i] < largest && array[i] > second_largest){
         second_largest=array[i];
      }
   }
   if(second_largest==INT_MIN){
      cout<<"No second largest element :)";
      return;
   }
   cout<<"The second largest val is "<<second_largest;
}


int main(){
   //take input array
   int n;
   vector<int> array;
   cout<<"Enter the elements of the array : ";
   cin>>n;
   array_maker(array,n);
   largest_val(array,n);
   largest_2nd_val(array,n);
}