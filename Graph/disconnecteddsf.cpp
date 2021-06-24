#include <iostream>
#include <vector>
using namespace std;

void printDSF(vector<vector<int>> v, int sv, vector<bool> &b)
{
  cout << sv << endl;
  b[sv] = true;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[sv][i] == 1 && b[i] == false)
    {
      printDSF(v, i, b);
    }
  }
}
void DSF(vector<vector<int>> v){
  int n = v.size();
  vector<bool> b(n,false);
  for(int i = 0; i<n; i++){
    if(b[i] == false){
      printDSF(v,i,b);
    }
  }

} int main()
{
  int n, e;
  cin >> n >> e;
  vector<vector<int>> matrix(n, vector<int>(n, 0));
  for (int i = 1; i <= e; i++)
  {
    int fv, sv;
    cin >> fv >> sv;
    matrix[fv][sv] = 1;
    matrix[sv][fv] = 1;
  }
  vector<bool> b(n, false);
  DSF(matrix);
  return 0;
}