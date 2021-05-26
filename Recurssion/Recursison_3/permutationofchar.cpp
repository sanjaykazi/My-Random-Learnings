#include <iostream>
using namespace std;
void permutation(char san[],int i = 0){
  if(san[i] == 0){
    cout<<san<<endl;
    return;
  }
  for(int j = i; san[j] != '\0';j++){
    swap(san[j],san[i]);
    permutation(san, i+1);
    swap(san[j],san[i]);
  }

}

int main()
{
  char san[100];
  cout << "Enter the character" << endl;
  cin >> san;
  cout<<"The permuntation of the given string is as follows: "<<endl;
  permutation(san);
  return 0;
}