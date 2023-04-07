#include<iostream>
using namespace std;
int climbstaires(int n){
     if(n==0 || n== 1){
          return 1;

     }
     int ans = climbstaires(n-1) + climbstaires(n-2);
     return ans;
}
int main(){
     int n;
     cout<<"Enter the value of n "<<endl;
     cin>>n;
    int ans = climbstaires(n);
    cout<<" Answer -> "<<ans<<endl;


}