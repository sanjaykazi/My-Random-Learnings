#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void print(vector<vector<int>> v, int sv, vector<bool> &b)
{
  cout << sv << endl;
  b[sv] = true;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[sv][i] == 1 && b[i] == false)
    {
      print(v, i, b);
    }
  }
}
void printBSF(vector<vector<int>> v, int sv, vector<bool> &b)
{
  queue<int> q;
  q.push(sv);
  b[sv] = true;
  while (!q.empty())
  {
    int cv = q.front();
    q.pop();
    cout << cv << endl;
    for (int i = 0; i < v.size(); i++)
    {
      if (v[cv][i] && !b[i])
      {
        q.push(i);
        b[i] = true;
      }
    }
  }
}
void BSF(vector<vector<int>> v)
{
  int n = v.size();
  vector<bool> b(n, false);
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (b[i] == false)
    {
      count++;
      printBSF(v, i, b);
    }
  }
  cout << "Number of disconnected components are: " << count << endl;
}
  int main()
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
    // cout << "DSF print" << endl;
    // print(matrix, 0, b);
    cout << "BSF print" << endl;
    BSF(matrix);
    return 0;
  }

  // 7 8 0 1 0 2 1 3 1 4 2 6 3 5 4 5 6 5