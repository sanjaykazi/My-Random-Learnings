#include <iostream>
using namespace std;

int zeros(int n){
  if(n == 0) return 0;

  int small = zeros(n/10);

  int lastDigit = n%10;
  if(lastDigit == 0 ){
    return small + 1;
  }
  else{
    return small;
  }
}


int main()
{
  int n;
  cout << "Enter the  two numbers you want to count no of zeros in it: " << endl;
  cin >>n;
  cout<<"The number , "<<n<<" has "<<zeros(n)<<" zeros "<<endl;
  return 0;
}