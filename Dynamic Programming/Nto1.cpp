#include<iostream>
#include<climits>
#include<cmath>
#include<algorithm>
using namespace std;

int Nto1(int n){
  if(n <= 1){
    return 0;
  }
  int y,z;
  y = z = INT_MAX;
  int x = Nto1(n-1);
  if(n % 2== 0){
    y = Nto1(n / 2);
  }
  if(n%3 == 0){
    z = Nto1(n / 3);
  }

  return min(x,min(y,z)) + 1;

}
int main(){
  int n;
  cin>> n;
  cout<<Nto1(n);
  return 0;
}