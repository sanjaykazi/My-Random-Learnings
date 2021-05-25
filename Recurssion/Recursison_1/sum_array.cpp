#include<iostream>
using namespace std;
int sumArray(int arr[], int n){
  if(n == 0) return 0;

  return arr[0] + sumArray(arr+1, n-1);
}
int sumArray2(int arr[], int n){
  if(n == 0) return 0;

  return arr[n-1] + sumArray2(arr, n-1);
}
int sumArray3(int arr[], int n, int i){
  if(i == n) return 0;

  return arr[i] + sumArray3(arr, n, i+1);
}

int main (){
  int arr[] = {2,3,1,4,5,9};
  int n = 6;
  cout<<"sum of the array is: "<<sumArray3(arr, n,0);

  return 0;
}