#include <iostream>
using namespace std;

int pow(int x, int n){
  if(n == 0) return 1;

  int small = pow(x, n - 1);

  return x*small;
}


int main()
{
  int x,n;
  cout << "Enter the  number you want to find power of: " << endl;
  cin >> x;
  cout << "Enter the  power: " << endl;
  cin >> n;

  cout << "The " << n << " power of "<<x<<" is: " << pow(x,n) << endl;

  return 0;
}