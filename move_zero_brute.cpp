#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void zero_checker(vector<int> & array){
   vector<int> ans;
   int zero_count=0;
   for(int i=0 ; i <array.size() ; i++){
      if(array[i] !=0){
          ans.push_back(array[i]);
      }
      if(array[i] ==0){
         zero_count++;
      }
   }
   for(int i=0;i<zero_count;i++){
      ans.push_back(0);
   }
   for(auto num : ans){
      cout<<num;
   }

}


int main(){
   int n;
   cin>>n;
   vector<int> array(n);
   for(int i=0 ; i <n ; i++){
      cin>>array[i];
   }
   zero_checker(array);
}
