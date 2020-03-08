class Matrix {
public:
  Matrix(int row, int col)
    : _row(row), _col(col)
  {
    _pmat = new double[row * col];
  }

  Matrix(const Matrix &rhs)
    : _row(rhs._row), _col(rhs._col)
  {
    int elem_cnt = _row * _col;
    _pmat = new double[_row * _col];

    for (int ix = 0; ix < elem_cnt; ++ix) {
      _pmat[ix] = rhs._pmat[ix];
    }
  }

private:
  int     _row, _col;
  double* _pmat;
};
