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
int main() 
{
  int n;
  cout<<"EWnter the no of wheels in hanoi tower game:"<<endl;
  cin>>n;
  cout<<"To move the all discs on to the destination tower we need "<<towerOfHanoi(n)<<" moves."<<endl;
  
  
  return 0;

}