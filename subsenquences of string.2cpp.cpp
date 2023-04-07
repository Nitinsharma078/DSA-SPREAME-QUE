#include<iostream>
#include<vector>
using namespace std;
void SubS(string &str,string output,int i,int n){
     if(i>=n){
          cout<<" Sunsequence is -> "<<output<<endl;
          return;
     }
     //exclude
     SubS(str,output,i+1,n);
//string s = output + str[i];
output.push_back(str[i]);
     //inclued
     SubS(str,output,i+1,n);
}
int main(){
     string str = "abc";
     string output = "";
     int n = str.size();
     int i=0;
     SubS(str,output,i,n);
}