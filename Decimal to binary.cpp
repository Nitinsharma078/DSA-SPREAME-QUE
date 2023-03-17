#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
     int n;
     int ans=0;
     int i=0;
     cout<<"Enter the number"<<endl;
     cin>>n;
     while(n!=0){
          int bit = n & 1;
          ans = (bit * pow(10,i))+ ans;
          n = n/2;
          i++;
     }
     cout<<"nswer - > "<<ans;
}