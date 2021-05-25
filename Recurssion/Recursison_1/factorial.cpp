#include<iostream>
using namespace std;
int fact(int n){
  if(n < 0) return -1;
  if(n == 0) return 1;
  return n*fact(n-1);
}
int main(){
  int n;
  cout<<"Enter the Number you want to calculate factorial of: "<<endl;
  cin>>n;
  cout<<"factorial of: "<<n<<" is "<<fact(n)<<endl;

  return 0;
}