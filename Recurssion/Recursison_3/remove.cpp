#include<iostream>
using namespace std;
void rmv(char san[], char r){
  if(san[0] == '\0'){
    return;
  }
  if(san[0] != r){
    rmv(san+1,r);
  }
  else{
    for(int i = 0; san[i] != '\0';i++){
      san[i] = san[i+1];
    }
    rmv(san,r);
  }
}

int main(){
  char san[100];
  cout<<"Enter the character"<<endl;
  cin>>san;
  char rem;
  cout<<"Enter the character that you want to remove: "<<san<<endl;
  cin>>rem;
  rmv(san,rem);
  cout<<"After removing "<<rem<<" from "<<san<<" it looks like: "<<san<<endl;
  return 0;
}