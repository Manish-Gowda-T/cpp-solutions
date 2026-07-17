#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector <int> v1,int sum,int distance){
    unordered_map<int,int> mp;
    for(int i=0; i <v1.size(); i++){
        int diff=sum-v1[i];
        if(mp.count(diff)){
            if(abs(mp[diff] - i) <= distance){
            return{mp[diff],i};
            }
        }
        mp[v1[i]]=i;
    }
    return {};
}


int main(){
    int n ,sum,distance;
    cin>>n;
    vector<int> v1(n);
    vector<int> ans;
    for(int i=0; i < n ;i++){
        cin>>v1[i];
    }
    cin>>sum;
    cin>>distance;
    ans= twoSum(v1,sum,distance);
    for(int num : ans){
        cout<<num<<" ";
    }
}