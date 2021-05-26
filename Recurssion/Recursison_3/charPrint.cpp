#include<iostream>
using namespace std;
void print(char san[]){
  if(san[0] == '\0') return;
  cout<<san[0];
  print(san+1);
}
int main(){
  char san[] = "sanjay";
  print(san);
  return 0;
}