#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void find_Maxi(int arr[],int n,int i, int& maxi){
     if(i>=n){
          return;
     }
     if(arr[i]>maxi){
          maxi = arr[i];
     }
     find_Maxi(arr,n,i+1,maxi);
}
int main(){
     int arr[] = {10,20,63,85,96,45,52};
     int n = sizeof(arr)/sizeof(arr[0]);
     int maxi = INT_MIN;
     int i =0;
     find_Maxi(arr,n,i,maxi);
     cout<<"answer -> "<<maxi;
}