#include<iostream>
using namespace std;
bool isPresent(int arr[], int n, int key){
  if(n==0){
    return false;
  }
  if(arr[0] == key){
    return true;
  }
  return isPresent(arr+1,n-1,key);
}
bool isPresent2(int arr[], int n, int key){
  if(n==0){
    return false;
  }
  bool remArr = isPresent2(arr+1,n-1,key);
  if(remArr){
    return true;
  }
  if(arr[0] == key){
    return true;
  }else{
    return false;
  }
  
}
bool isPresent3(int arr[], int n, int key){
  if(n==0){
    return false;
  }
  if(arr[n-1] == key){
    return true;
  }
  return isPresent3(arr,n-1,key);
}
bool isPresent4(int arr[], int n, int key,int i){
  if(i==n){
    return false;
  }
  if(arr[i] == key){
    return true;
  }
  return isPresent4(arr,n-1,key, i+1);
}

int main (){
  int arr[] = {2,3,1,4,5,9};
  int n = 6;
  int key = 9;
  if(isPresent4(arr, n,key,0)){
    cout<<key<<" is present in the array."<<endl;
  }else{
    cout<<key<<" is not present in the array."<<endl;
  }


  return 0;
}