#include <iostream>
using namespace std;
int strtoi(char san[], int n){
  if(n==0){
    return 0;
  }
  int small = strtoi(san, n-1);
  int last_digit = san[n-1] - '0';
  return (small*10 + last_digit);

}
int length(char san[]){
  if(san[0] =='\0'){
    return 0;
  }
  return 1 + length(san+1);
}
int main()
{
  char san[100];
  cout << "Enter the character" << endl;
  cin >> san;
  int n = length(san);
  cout<<n;
  cout<<"The integer value will be: "<<strtoi(san,n);
  return 0;
}