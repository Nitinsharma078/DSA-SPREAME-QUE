#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>& arr,int key,int s,int e){
     if(s>=e){
          return -1; 
     }
     int mid = (s+e)/2;
     if(arr[mid]==key){
          return mid;
     }
     if(arr[mid] < key){
     return binarysearch(arr,key,mid+1,e);
     }
     else{
          return binarysearch(arr,key,s,mid-1);
     }
}
int main(){
     vector<int> arr ={25,63,96,8,525,96,28};
    int key = 96;
    int n = arr.size();
   // int i=0;
    int s =0;
    int e = n-1;

    int ans = binarysearch(arr,key,s,e);
    cout<<"Amswer is = "<<ans;

     
     
}