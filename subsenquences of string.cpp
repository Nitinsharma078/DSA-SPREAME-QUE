#include<iostream>
#include<vector>
using namespace std;
void subsequence(string input,string output,int i,vector<string>& v){
     //int n = input.size();
     if (i >=input.length())
     {
          //cout<<output<<endl;
          v.push_back(output);
          return; 
     }
     subsequence(input,output,i+1,v);
     output.push_back(input[i]);
     subsequence(input,output,i+1,v);
     
}
int main(){
     string input = "abc";
     string output = "";
     vector<string>v;
     int i=0;
     subsequence(input,output,i,v);
     for(auto val:v){
          cout<<val<<" "<<endl;

     }
     cout<<"size of string->"<<v.size();
     return 0;
}