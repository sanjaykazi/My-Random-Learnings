#include<iostream>
using namespace std;

void mergeArray(int x[], int y[], int a[], int s, int e){
  int mid = (s+e)/2;
  int i = s;
  int j = mid+1;
  int k = s;
  while(i <= mid && j <= e){
    if(x[i] < y[j]){
      a[k] = x[i];
      i++;
      k++;
    }
    else{
      a[k] = y[j];
      j++;
      k++;
    }
  }
  while(i<=mid){
    a[k] = x[i];
      k++;
      i++;
  }
  while(j<=e){
    a[k] = y[j];
      k++;
      j++;
  }
}

void mergerSort(int arr[], int s, int e){
  if(s>=e){
    return;
  }
  int mid = (s+e)/2;
  int x[100];
  int y[100];
  for(int i = 0; i<=mid;i++){
    x[i] = arr[i];
  }
  for(int i = mid+1; i<e;i++){
    y[i] = arr[i];
  }
  mergerSort(x,s,mid);
  mergerSort(y,mid+1,e);
  mergeArray(x,y,arr,s,e);
}

int main(){
  int arr[] = {1,6,5,7,3,4,9};
  mergerSort(arr,0,6);
  for(int i = 0; i< 7; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}