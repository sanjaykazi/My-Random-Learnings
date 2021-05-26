#include <iostream>
#include<string>
#include<vector>
using namespace std;

int towerOfHanoi(int n){
  if(n==0){
    return 0;
  }
  return 2*towerOfHanoi(n-1) + 1;
}
void toh_step(int n, char s, char h, char d){
  if(n==0){
    return;
  }
  toh_step(n-1,s,h,d);
  cout<<"Moving disk "<<n<<" from "<<s<<" to "<< d<<endl;
  toh_step(n-1,h,d,s);
}
int main() 
{
  int n;
  cout<<"EWnter the no of wheels in hanoi tower game:"<<endl;
  cin>>n;
  cout<<"To move the all discs on to the destination tower we need "<<towerOfHanoi(n)<<" moves."<<endl;
  toh_step(n,'A','B','C');
  
  
  return 0;

}