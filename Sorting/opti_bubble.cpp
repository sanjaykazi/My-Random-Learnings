#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void Bubble(vector<int> &vec)
{
  for(int i = 0; i<vec.size(); i++){
    int flag = 0;
    for(int j =0; j<vec.size()-1; j++){
      if(vec.at(j) > vec.at(j+1)){
        swap(vec.at(j) , vec.at(j+1));
        flag = 1;
      }
    }
    if(flag == 0){
      break;
    }
  }
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
  print(vec);
  Bubble(vec);
  print(vec);

  return 0;
}