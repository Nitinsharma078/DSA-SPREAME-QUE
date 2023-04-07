#include<iostream>
#include<vector>
using namespace std;
void subArray(vector<int>&nums,int s,int e){
 //base case
 if(e==nums.size()){
     return;
 }

 for(int i = s;i<=e;i++){
     cout<<nums[i]<<" ";
 }
 cout<<endl;
 subArray(nums,s,e+1);
}

int main(){
     vector<int> nums ={1,2,3,4,5};
     subArray(nums,0,0);
}