#include <iostream>
using namespace std;

int multiply(int m, int n){
  if(n==0) return 0;

  int small = multiply(m,n-1);
  return small + m;
}


int main()
{
  int n,x;
  cout << "Enter the  two numbers you want to multiply: " << endl;
  cin >> n>>x;
  cout<<"The product of, "<<n<<" and "<<x<<" is "<<multiply(n,x)<<endl;
  return 0;
}