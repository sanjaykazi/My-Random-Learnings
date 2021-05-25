#include <iostream>
using namespace std;

void print(int n){
  if(n == 0){
    return;
  }
  print(n-1);
  cout<<n<<" ";
}
void print2(int n){
  if(n == 0){
    return;
  }
  cout<<n<<" ";
  print(n-1);
}


int main()
{
  int n;
  cout << "Enter the  number you want to print: " << endl;
  cin >> n;
  print(n);
  cout<<endl;
  print2(n);

  return 0;
}