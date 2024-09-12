#include <bits/stdc++.h>
using namespace std;
int factorialis(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  return n * factorialis(n - 1);
}
int main()
{
  int n = 5;
  cout << "Factorial of " << n << " is: " << factorialis(n);
}