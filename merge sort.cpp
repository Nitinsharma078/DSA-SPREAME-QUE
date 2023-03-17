#include<iostream>
using namespace std;
void Merge(int *arr , int s,int e){
     int mid = (s+e)/2;
     int len1 = mid-s+1;
     int len2 = e-mid;
     int *left = new int[len1];
     int *right =new int[len2];
     int k = s;
     for(int i=0;i<len1;i++){
          left[i]=arr[k];
          k++;
     }
     k=mid +1;
     for(int i=0;i<len2;i++){
          right[i]=arr[k];
          k++;
     }
     // mege logic
     int leftindex = 0;
     int rightindex = 0;
     int mainindex = s;
     while(leftindex<len1 && rightindex<len2){
          if(left[leftindex]< right[rightindex]){
               arr[mainindex++] = left[leftindex++];
          }
          else{
               arr[mainindex++]=right[rightindex++];
          }

     }
     while(leftindex < len1){
          arr[mainindex++] = left[leftindex++];
     }
     while(rightindex < len2){
          arr[mainindex++] = right[rightindex++];
     }


}
void mergesort(int*arr,int s,int e){
     if(s >= e){
          return ;
     }
     int mid = (s+e)/2;

     mergesort(arr,s,mid);
     mergesort(arr,mid+1,e);
     Merge(arr,s,e);
}
int main(){
     int arr[]={2,1,5,8,3,8,9,4};
     int n = sizeof(arr)/sizeof(arr[0]);

     int s = 0;
     int e = n-1;
      mergesort(arr,s,e);
   for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
   }

}