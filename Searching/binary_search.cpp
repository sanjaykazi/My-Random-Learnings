#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int> &vec, int key){
  sort(vec.begin(),vec.end());
  int s = 0;
  int e = vec.size() - 1;
  while(s <= e){
    int mid = s + (e-s)/2;
    if(vec[mid] == key){
      return mid;
    }
    else if(vec[mid] > key){
      e = mid - 1;
    }
    else{
      s = mid + 1;
    }
  }

  return -1;
}

void print(vector<int> vec)
{
  for(int i = 0; i< vec.size(); i++){
    cout<<vec[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  int n;
  cin >> n;
  vector<int> vec;
  for (int i = 0; i < n; i++)
  {
    int t;
    cin >> t;
    vec.push_back(t);
  }
  int k = 0;
  cout<<"Please enter the key: "<<endl;
  cin>>k;
  if(binarySearch(vec,k) == -1){
    cout<<"Invalid Key"<<endl;
  }
  else{
    cout<<"The key is at position: "<<binarySearch(vec,k)<<endl;
  }

  return 0;
}