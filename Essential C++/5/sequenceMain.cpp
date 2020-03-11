#include "Fibonacci.h"
#include "Pell.h"

vector<int> Fibonacci::_elems;
vector<int> Pell::_elems;

inline void display(ostream &os, const num_sequence &ns, int pos) {
  os << "The element at position "
     << pos            << " for the "
     << ns.what_am_i() << " sequence is "
     << ns.elem(pos)   << endl;
}


int main() {
  const int pos = 8;

  Fibonacci fib;
  display(cout, fib, pos);

  Pell pell;
  display(cout, pell, pos);
}
