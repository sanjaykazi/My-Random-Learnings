#include<iostream>
using namespace std;
void print(char san[]){
  if(san[0] == '\0') return;
  cout<<san[0];
  print(san+1);
}
void revPrint(char san[]){
  if(san[0] == '\0') return;
  revPrint(san+1);
  cout<<san[0];
}
int main(){
  char san[] = "sanjay";
  print(san);
  cout<<endl;
  revPrint(san);
  return 0;
}