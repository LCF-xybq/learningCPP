#include "Matrix.h"

int main() {
  Matrix m;
  cout << m << endl;

  elemType ar[16] = {
    1., 0., 2., 3., 0., 5., 3., 1.,
    1., 0., 2., 3., 0., 5., 3., 1.};

  Matrix identity(ar);
  cout << identity << endl;

  Matrix m2(identity);
  m = identity;
  cout << m2 << endl;
  cout << m << endl;

  m2 += m;
  cout << m2 << endl;
  m2 = m2 * m;
  cout << m2 << endl;

  return 0;
}
