#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>> v, int sv, vector<bool> &b){
  cout<<sv<<endl;
  b[sv] = true;
  for(int i = 0; i<v.size(); i++){
    if(v[sv][i] == 1 && b[i] == false){
      print(v,i,b);
    }
  }
}
int main(){
  int n,e;
  cin>>n>>e;
  vector<vector<int>> matrix(n, vector<int>(n,0));
  for(int i = 1; i<= e; i++){
    int fv, sv;
    cin>>fv>>sv;
    matrix[fv][sv] = 1;
    matrix[sv][fv] = 1;
  }
  vector<bool> b(n,false);
  print(matrix, 0, b);
  return 0;
}