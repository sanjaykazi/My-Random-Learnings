#include <iostream>
#include<string>
#include<vector>
using namespace std;

int stair(int n){
  if(n<0) return -1;
  if(n == 0) return 1;
  if(n == 1) return 1;
  if(n == 2) return 2;

  return stair(n-1) + stair(n-2) + stair(n-3);
}




int main()
{
  int n;
  cout<<"Enter the maximum number of steps so I tell you all possible way to reach at top XD."<<endl;
  cin>>n;
  cout<<stair(n)<<endl;
  return 0;

}