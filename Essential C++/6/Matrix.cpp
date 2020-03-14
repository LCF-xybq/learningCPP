#include "Matrix.h"

template <typename elemType>
Matrix<elemType>
operator+(const Matrix<elemType> &m1, const Matrix<elemType> &m2) {
  Matrix<elemType> result(m1);
  result += m2;
  return result;
}

template <typename elemType>
Matrix<elemType>
operator*(const Matrix<elemType> &m1, const Matrix<elemType> &m2) {
  Matrix<elemType> result(m1.rows(), m2.cols());
  for (int i = 0; i < m1.rows(); i++) {
    for (int j = 0; j < m1.cols(); j++) {
      result(i, j) = 0;
      for (int k = 0; k < m1.cols(); k++) {
        result(i, j) += m1(i, k) * m2(k, j);
      }
    }
  }
  return result;
}

template <typename elemType>
void Matrix<elemType>::operator+=(const Matrix &m) {
  int matrix_size = cols() * rows();
  for (int i = 0; i < matrix_size; ++i)
    (*(_matrix + i)) += (*(m._matrix + i));
}

template <typename elemType>
ostream& Matrix<elemType>::print(ostream &os) const {
  int col = cols();
  int matrix_size = col * rows();
  for (int i = 0; i < matrix_size; ++i) {
    if (i % col == 0) os << endl;
    os << (*(_matrix + i)) << ' ';
  }
  os << endl;
  return os;
}

int main() {
  Matrix<float> id(4, 4);
  float ar[16] = {1., 0., 0., 0., 0., 1., 0., 0.,
                  0., 0., 1., 0., 0., 0., 0., 1.};

  for (int i = 0, k = 0; i < 4; i++)
    for (int j = 0; j < 4; j++)
      id(i, j) = ar[k++];
  cout << id << endl;
}
