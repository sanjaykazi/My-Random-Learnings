#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void Sel(vector<int> &vec)
{
  for(int i = 0; i<vec.size()-1; i++){
    int smallest = i;
    for(int j =i+1; j<vec.size(); j++){
      if(vec.at(smallest) > vec.at(j) ){
        smallest = j;
      }
    }
    if(smallest != i)
      swap(vec.at(smallest) , vec.at(i));
  }
}
void selectionSort(vector<int> &a){
  int n = a.size();

     /*for(int i=0;i<=n-2;i++){

          int smallest = INT_MAX;
          for(int j = i+1;j<=n-1;j++){
            if(a[j]<smallest){
                smallest = a[j];
            }
          }

          if(a[i] > smallest){
            swap(a[i] , smallest);
          }

     }*/


     for(int i=0;i<=n-2;i++){
        int smallest = i;
        for(int j = i+1;j<=n-1;j++){

            if(a.at(j)<a.at(smallest)){
                smallest = j;
            }
        }

        swap(a.at(i),a.at(smallest));
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
  Sel(vec);
  print(vec);

  return 0;
}