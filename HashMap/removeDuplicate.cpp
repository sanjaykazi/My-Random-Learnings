#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> removeDuplicate(int *a, int n){
  vector<int> v;
  unordered_map<int, bool> myMap;

  for(int i=0; i<n;i++){
    if(myMap.count(a[i]) == 0){
      v.push_back(a[i]);
      myMap[a[i]] = true;
    }
  }
  return v;
}

int main(){
  int a[] = {1,2,3,4,5,4,3,2,1,4,5,6};
  vector<int> v = removeDuplicate(a, 12);

  for(int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
  }
  return 0;
}