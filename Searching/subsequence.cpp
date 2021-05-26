#include <iostream>
#include<string>
#include<vector>
using namespace std;
void sub_print(string input, string output, vector<string> &v){
 if(input.length() == 0){
   cout<<output<<" "<<endl;
   v.push_back(output);
   return;
 }
 sub_print(input.substr(1), output + input[0], v);
 sub_print(input.substr(1), output, v);
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
  vector<string> vec;
  char san1[100];
  char out1[10];
  string san;
  string out = "";
  cout << "Enter the character" << endl;
  cin >> san;
  cout<<"enter the char array:"<<endl;
  cin>>san1;
  cout << "below are the subsequence of: "<<san << endl;
  sub_print(san,out,vec);
  sub_print1(san1,out1,0);
  for(int i = 0; i<vec.size();i++){
    cout<<vec[i]<<"->";
  }
  return 0;

}