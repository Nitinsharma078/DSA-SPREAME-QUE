#include<iostream>
using namespace std;
#include<vector>

int partition(vector<int>&arr,int s,int e){

     int pivotI =s;
     int pivotElement = arr[s];
     int count = 0;
     for(int i=s+1;i<=e;i++){
          if(arr[i]<= pivotElement){ 
               count++;
          }
     }
     int RI = s + count;
    swap(arr[pivotI],arr[RI]);
     pivotI = RI;
     int i = s;
     int j = e;
     while(i<pivotI && j> pivotI){
          while( arr[i]<=pivotElement){
               i++;
          }
          while(arr[j]>pivotElement){
               j--;
          }
     
         if(i<pivotI && j>pivotI){
          swap(arr[i],arr[j]);
          }
     }

     return pivotI;
}
void quicksort(vector<int>&arr,int s ,int e){
     if(s>=e){
          return;
     }
     int p = partition(arr,s,e);
     quicksort(arr,s,p-1);
     quicksort(arr,p+1,e);

}

int main(){
     vector<int> arr ={5,6,9,3,1,85,63,85,96,45,12,2,3,2,95,2};
     
    // cin>>
   // int n = sizeof(arr)/sizeof(arr[0]) ;*/
   int n = arr.size();
     int s =0;
     int e=n-1;
     quicksort(arr,s,e);
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";

     }
     cout<<endl;
     return 0;
}
