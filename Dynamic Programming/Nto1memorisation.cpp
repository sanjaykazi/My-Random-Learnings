#include <iostream>
#include <climits>
#include <cmath>
#include <algorithm>
using namespace std;

int helper(int n, int *ans)
{
  if (n <= 1)
  {
    return 0;
  }
  if(ans[n] != -1){
    return ans[n];
  }
  int y, z;
  y = z = INT_MAX;
  int x = helper(n - 1, ans);
  if (n % 2 == 0)
  {
    y = helper(n / 2, ans);
  }
  if (n % 3 == 0)
  {
    z = helper(n / 3, ans);
  }
  int output = min(x, min(y,z)) + 1;
  //store for future use
  ans[n] = output;

  return output;
}

int minStep(int n){
  int * ans = new int[n+1];
  for(int i = 0; i <=n; i++){
    ans[i] = -1;
  }
  return helper(n, ans);
}
int main()
{
  int n;
  cin >> n;
  cout << minStep(n);
  return 0;
}