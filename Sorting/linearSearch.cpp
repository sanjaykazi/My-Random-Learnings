#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int linearSearch(vector<int> &vec, int key){
  for(int i = 0; i < vec.size(); i++){
    if(vec[i] == key){
      return 1;
    }
  }
  return 0;}

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
  if(linearSearch(vec,k)){
    cout<<"Valid Key"<<endl;
  }
  else{
    cout<<"Invalid Key"<<endl;
  }

  return 0;
}