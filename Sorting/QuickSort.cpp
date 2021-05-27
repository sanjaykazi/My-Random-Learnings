#include <iostream>
using namespace std;

int partition(int a[], int s, int e){
  int i = s;
  int pivot = a[e];
  for(int j = s;j<e;j++){
    if(a[j] < pivot){
      swap(a[i],a[j]);
      i++;
    }
  }
  swap(a[i],a[e]);
  return i;

}
void quickSort(int arr[], int s, int e)
{
  if (s >= e)
  {
    return;
  }
  int p = partition(arr, s, e);
  quickSort(arr, s, p - 1);
  quickSort(arr, p + 1, e);
}
int main()
{
  int arr[] = {10, 6, 50, 72, 36, 49, 99};
  quickSort(arr, 0, 6);
  for (int i = 0; i < 7; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}