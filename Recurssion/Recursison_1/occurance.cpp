#include <iostream>
using namespace std;

void occurance(int arr[], int n, int key, int i,int &ans)
{
  if (i == n)
  {
    return;
  }
  if (arr[i] == key)
  {
    ans++;
  }
  return occurance(arr, n, key, i + 1,ans);
}

int main()
{
  int arr[] = {2, 3, 1, 4, 5, 3, 4, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key = 4;
  int ans=0;
  cout<<"Printing total occurance of  "<<key<<" in the array."<<endl;
  occurance(arr, n, key, 0,ans);
  cout<<ans<<endl;
  return 0;
}