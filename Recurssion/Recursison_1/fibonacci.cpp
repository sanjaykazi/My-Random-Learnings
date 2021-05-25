#include <iostream>
using namespace std;

int fib(int n)
{
  if (n < 0)
  {
    return 0;
  }
  if (n == 0)
  {
    return 0;
  }
  if (n == 1)
  {
    return 1;
  }
  int sml_1 = fib(n - 1);
    int sml_2 = fib(n-2);
  return sml_1 + sml_2;
}

int main()
{
  int n;
  cout << "Enter the  number you want to find fibonacci of: " << endl;
  cin >> n;

  cout << "The " << n << "th fibonacci series contains: " << fib(n) << endl;

  return 0;
}