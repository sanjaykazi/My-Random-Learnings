#include<iostream>
using namespace std;
int lenChar(char san[]){
  if(san[0] == '\0') return 0;
  int small = lenChar(san+1);
  return 1 + small;
}

int main(){
  char san[] = "sanjay";
  cout<<"Length of the character array: "<<san<<" is "<<lenChar(san)<<endl;
  return 0;
}