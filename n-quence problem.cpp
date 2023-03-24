#include<iostream>
#include<vector>
using namespace std;
void printS(vector<vector<char>> &board,int n){
     for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              cout<<board[i][j]<<" ";
          }
          cout<<endl;
     }
     cout<<endl<<endl;
}
bool isSaf(int row,int col,vector<vector<char>> &board,int n){
     int i= row;
     int j= col;
     while(j >=0){
        if(board[i][j]=='Q'){
          return false;
        }  
        j--;
     }
     i=row;
     j=col;
     while(i>=0 && j>=0){
          if(board[i][j]=='Q'){
               return false;
          }
          i--;
          j--;
     }
     i = row;
     j= col;
     while( i < n && j >= 0){
          if(board[i][j]=='Q'){
               return false;
          }
          i++;
          j--;
     }

     return true;
}

void solveQ(vector<vector<char>> &board,int col,int n){
     if(col >= n){
          printS(board,n);
          return ;
     }
     //one case tum solve kerd baki recursion sabhallega
     for(int row = 0;row < n;row++){
          if(isSaf(row,col,board,n)){

               board[row][col] ='Q';

               solveQ(board,col+1,n);

               board[row][col] = '-';
          }

     }
}
int main(){
     int n=4;
     vector<vector<char>>board(n,vector<char>(n,'-'));
     int col=0;
     solveQ(board,col,n);
     return 0;
}