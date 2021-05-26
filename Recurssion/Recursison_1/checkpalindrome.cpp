#include<iostream>
#include<vector>
using namespace std;
bool isPalindrome(int arr[], int s, int e){
  if(s>e) return true;
  if(arr[s] == arr[e]){
    return true;
  }else{
    return false;
  }
  return isPalindrome(arr, s++, e--);
}


int main (){
  int arr[] = {0,1,2,3,2,1,0};
  int n = sizeof(arr)/sizeof(arr[0]);
  if(isPalindrome(arr,0,n-1)){
    cout<<"Palindrome"<<endl;
  }
  else{
    cout<<"Not a palindrome"<<endl;
  }
  
  return 0;
}