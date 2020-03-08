class Triangular {
public:
  // const member function
  int length()      const { return _length; }
  int beg_pos()     const { return _beg_pos; }
  int elem(int pos) const;

  // non-const member function
  bool next(int &val);
  void next_reset() { _next = _beg_pos - 1; }
private:
  int _length;
  int _beg_pos;
  mutable int _next;
  static vector<int> _elems;
};
