#include<iostream>
#include<vector>
using namespace std;
void subsequence(string input,string output,int i){
     //int n = input.size();
     if (i >=input.length())
     {
          cout<<output<<endl;
          return; 
     }
     subsequence(input,output,i+1);
     output.push_back(input[i]);
     subsequence(input,output,i+1);
     
}
int main(){
     string input = "ab";
     string output = "";
     int i=0;
     subsequence(input,output,i);
     return 0;
}