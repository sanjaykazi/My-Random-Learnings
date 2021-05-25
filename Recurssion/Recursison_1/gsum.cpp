#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

float gsum(int n){
  if(n == 0) return 1;

  float small = gsum(n-1);

  return small + 1.0/pow(2,n);

  
}


int main()
{
  int n;
  cout << "Enter the  two numbers you want to calculate geometric sum of: " << endl;
  cin >>n;
  cout<<"The geometric sum is, "<<gsum(n)<<endl;
  return 0;
}