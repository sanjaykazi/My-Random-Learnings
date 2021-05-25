#include <iostream>
using namespace std;

int sum(int n){
  if(n==0) return 0;

  int small = sum(n/10);
  int add = n%10;
  return small + add;
}


int main()
{
  int n;
  cout << "Enter the  number you want to sum its digit: " << endl;
  cin >> n;
  cout<<"The sum of digits of, "<<n<<" is "<<sum(n)<<endl;
  return 0;
}