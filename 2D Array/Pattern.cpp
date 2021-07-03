#include<iostream>
using namespace std;
int main()
{
      int n;
  cin >> n;

  for (int i = 0; i < n; i += 2) {
    for (int j = 1; j <= n; j++)
      cout << j + i * n << ' ';
    cout << '\n';
  }

  int s = (n % 2) ? n - 2 : n - 1;
  for (int i = s; i > 0; i -= 2) {
    for (int j = 1; j <= n; j++)
      cout << j + i * n << ' ';
    cout << '\n';
  }
    return 0;
}