#include<iostream>
using namespace std;
int partition(int *arr,int l,int h){
     int pivot = arr[h];
     int i = l-1;
     for(int j =l;j<=h-1;j++ ){
          if(arr[j]<pivot){
               i++;
               swap(arr[i],arr[j]);
          }
     }
     swap(arr[i+1],arr[h]);
     return i+1;

}
void quicksort(int* arr,int l,int h){
     if(l>=h){
          return;
     }
     int p = partition(arr,l,h);
     quicksort(arr,l,p-1);
     quicksort(arr,p+1,h);
}
int main(){
     int arr[] = {4,3,9,5,2,8};
     int n = 6;
     int l =0;
     int h =n-1;
     quicksort(arr,l,h);
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}