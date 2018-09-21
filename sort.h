#include <iostream>
using namespace std;
void Interchange(int* a,int in,int n)
{
  *(a + in)+=*(a + n);
  *(a + n)=*(a + in) - *(a + n);
  *(a + in)=*(a + in) - *(a + n);
}
void MaxArr(int* a, int n)
{
  int max_in, i;
  max_in=0;
  for (i=1; i<n; i++)
    if *(a + max_in)<(a + i)
      max_in=i;
  Interchange(a, max_in, n);
}
int main()
{
  int A[10];
  int i;
  for (i=0; i<10; i++)
    *(A+i)=1 + rand() % 100;
  for (i=9; i>0; i--)
    MaxArr(A, i);
  for (i=0; i<10; i++)
    cout << *(A + i) << ' ';
  cout << endl;
  return 0;
}
