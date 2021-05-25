#include <iostream>
using namespace std;

int digit_count(int n){
  if(n == 0){
    return 0;
  }
  int small = digit_count(n/10);
  return small + 1;

}


int main()
{
  int n;
  cout << "Enter the  number you want to count its digit: " << endl;
  cin >> n;
  cout<<"This "<<n<<" contains: "<<digit_count(n)<<" digits"<<endl;
  return 0;
}