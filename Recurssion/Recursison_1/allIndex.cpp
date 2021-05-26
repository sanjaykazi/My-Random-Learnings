#include <iostream>
using namespace std;

void printAllIndices(int arr[], int n, int key, int i)
{
  if (i == n)
  {
    return;
  }
  if (arr[i] == key)
  {
    cout<<i<<" ";
  }else{
    cout<<"Key is not present in the array"<<endl;
  }
  printAllIndices(arr, n, key, i + 1);
}

int main()
{
  int arr[] = {2, 3, 1, 4, 5, 3, 4, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key = 3;
  cout<<"Printing all the indices with value "<<key<<endl;
  printAllIndices(arr, n, key, 0);
  return 0;
}