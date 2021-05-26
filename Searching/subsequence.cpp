#include <iostream>
#include<string>
using namespace std;
void sub_print(string input, string output){
 if(input.length() == 0){
   cout<<output<<" "<<endl;
   return;
 }
 sub_print(input.substr(1), output + input[0]);
 sub_print(input.substr(1), output);
}
void sub_print1(char input[], char output[], int i){
 if(input[0] == '\0'){
   output[i] = '\0';
   cout<<output<<" "<<endl;
   return;
 }
 sub_print1(input + 1, output, i);
 output[i] = input[0];
 sub_print1(input + 1, output, i+1);
 
}


int main()
{
  char san1[100];
  char out1[10];
  string san;
  string out = "";
  cout << "Enter the character" << endl;
  cin >> san;
  cout<<"enter the char array:"<<endl;
  cin>>san1;
  cout << "below are the subsequence of: "<<san << endl;
  sub_print(san,out);
  sub_print1(san1,out1,0);
  return 0;
}