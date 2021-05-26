#include<iostream>
#include<vector>
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
  return isPresent4(arr,n,key, i+1);
}
void saveAllPos(int arr[], int n, int key,  int i, vector<int> &vec){
  if(i==n){
    return;
  }
  if(arr[i] == key){
    vec.push_back(i);
  }
  saveAllPos(arr,n,key,i+1,vec);

}
void printVector(vector<int> vec){
  for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" ";
  }
  cout<<endl;
}

int main (){
  int arr[] = {2,3,1,4,5,9,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  vector<int> vec;
  int key = 3;
  if(isPresent2(arr, n,key)){
    cout<<key<<" is present in the array."<<endl;
  }else{
    cout<<key<<" is not present in the array."<<endl;
  }
  saveAllPos(arr,n,key,0,vec);
  cout<<"The positions of "<<key<<" in the array is/are: "<<endl;
  printVector(vec);




  return 0;
}