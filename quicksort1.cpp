#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int s,int e){
     int pivot = arr[s];
     int i = s;
     int j = e;
 while(i<=j)  
 {                    do{
          i++;
     }while(arr[i]<=pivot);
     do{
          j--;
     }while(arr[j]>pivot);
     if(i<j){
          swap(arr[i],arr[j]);
     }
 }
     swap(arr[s],arr[j]);
     return j;
}
void qsort(vector<int>&arr,int s,int e){
     if(s>=e){
          return;
     }
     int p = partition(arr,s,e);
     qsort(arr,s,p-1);
     qsort(arr,p+1,e);
}
int main(){
     vector<int> arr={85,96,8,528,36,15,82,63,10};
     int n = arr.size();
    /** for(int i=0;i<n;i++){
          cin>>arr[i];
     }*/

 qsort(arr,0,n-1);
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }
}