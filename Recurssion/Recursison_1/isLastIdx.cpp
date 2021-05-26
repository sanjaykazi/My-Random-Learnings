#include<iostream>
using namespace std;

int find(int arr[], int n, int key,int i){
  if(i==-1){
    return -1;
  }
  if(arr[i] == key){
    return i;
  }
  return find(arr,n,key, i-1);
}
int find2(int arr[], int n, int key){
  if(n==0){
    return -1;
  }
  if(arr[n-1] == key){
    return n-1;
  }
  return find2(arr,n,key);
}
int find3(int arr[], int n, int key, int i){
  if(i==n){
    return -1;
  }
  int remIdx = find3(arr, n, key, i +1);
  if(remIdx == -1){
    if(arr[i] == key){
      return i;
    }
    else{
      return -1;
    }
  }
  else{
    return remIdx;
  }
  
}

int main (){
  int arr[] = {2,3,1,4,5,3,4,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int key = 3;
  cout<<key<<" is present at index: "<<find3(arr,n,key,0)<<endl;


  return 0;
}