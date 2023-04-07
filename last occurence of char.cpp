#include<iostream>
using namespace std;
void occurence(string&s,char x ,int i,int&ans){
     if(i>=s.size()){
          return ;
     }
     if(s[i]==x){
          ans = i;
     }
     occurence(s,x,i+1,ans);
}
int main(){
     string s;
     cin>>s;
     char x;
     cin>>x;
     int i=0;
     int ans = 0;
     occurence(s,x,i,ans);
     cout<<" -> "<<ans;
     return 0;
}