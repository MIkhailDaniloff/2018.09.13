#include <iostream>
using namespace std;

long long int func(unsigned m, n)
{
  if (m==0) return n+1;
  if (n==0) return func(m-1, n);
  return func(m-1, func(m, n-1));
}
int main()
{
  unsigned m, n;
  cout << func(m,n) << endl;
  returnn 0;
}
