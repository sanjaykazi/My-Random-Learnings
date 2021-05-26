#include<iostream>
using namespace std;

int find(int arr[], int n, int key,int i){
  if(i==n){
    return -1;
  }
  if(arr[i] == key){
    return i;
  }
  return find(arr,n-1,key, i+1);
}

int main (){
  int arr[] = {2,3,1,4,5,3};
  int n = 6;
  int key = 3;
  cout<<key<<" is present at index: "<<find(arr,n,key,0)<<endl;


  return 0;
}