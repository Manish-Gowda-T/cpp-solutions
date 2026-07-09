#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

void lower_bound(vector <int> &nums , int target ){
    int low=0;
    int high=nums.size()-1;
    int ans=nums.size();
    while(low <= high){
        int mid=(high + low )/2;
        if(nums[mid] >= target){
            high=mid-1;
            ans=mid;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"The lower bound is : "<< ans<<endl;
}
void upper_bound(vector <int> &nums , int target ){
    int low=0;
    int high=nums.size()-1;
    int ans=nums.size();
    while(low <= high){
        int mid=(high + low )/2;
        if(nums[mid] > target){
            high=mid-1;
            ans=mid;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"The upper bound is : "<< ans<<endl;
}

int main (){
    int n,target;
    cin>>n;
    vector<int> array(n);
    for(int i=0 ; i < n ; i++){
        cin>>array[i];
    }
    cout<<"Enter the target : ";
    cin>>target;
    lower_bound(array,target);
    upper_bound(array,target);
    

}