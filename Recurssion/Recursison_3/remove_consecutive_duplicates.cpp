#include <iostream>
using namespace std;
void rmvdpl(char san[])
{
  if (san[0] == '\0')
  {
    return;
  }
  if (san[0] != san[1])
  {
    rmvdpl(san + 1);
  }
  else
  {
    for (int i = 0; san[i] != '\0'; i++)
    {
      san[i] = san[i + 1];
    }
    rmvdpl(san);
  }
}

int main()
{
  char san[100];
  cout << "Enter the character" << endl;
  cin >> san;
  rmvdpl(san);
  cout << "After removing consecutive duplicates our character looks like:" << san << endl;
  return 0;
}