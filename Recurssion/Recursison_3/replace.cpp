#include<iostream>
using namespace std;
void replacemen(char san[], char s, char k){
  if(san[0] == '\0'){
    return;
  }
  if(san[0] == s){
    san[0] = k;
  }
  replacemen(san+1,s,k);
}

int main(){
  char san[100];
  cout<<"Enter the character"<<endl;
  cin>>san;
  char character,replacement;
  cout<<"Enter the character and replacement in "<<san<<endl;
  cin>>character>>replacement;
  replacemen(san,character,replacement);
  cout<<"After replacement sanjay looks like this: "<<san<<endl;
  return 0;
}