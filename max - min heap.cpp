#include<iostream>
#include<queue>
using namespace std;
int main(){
     priority_queue<int> maxi;
      priority_queue<int,vector<int>,greater<int>> min;
      maxi.push(5);
      maxi.push(123);
      maxi.push(6);
      maxi.push(2);
      maxi.push(9);
      maxi.push(4);
      cout<<"size -> "<<maxi.size()<<endl;
      int n = maxi.size();
      for(int i=0;i<n;i++){
          cout<<maxi.top()<<" ";
          maxi.pop();
      }cout<<endl;

      min.push(123);
      min.push(6);
      min.push(2);
      min.push(9);
      min.push(4);
     int m = min.size();
      for(int i =0;i<m;i++){
          cout<<min.top()<<" ";
          min.pop();
      }cout<<endl;
      cout<<maxi.empty()<<endl;
cout<<min.empty()<<endl;
}