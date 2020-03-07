#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

class even_elem {
public:
  bool operator()(int elem) {
    return elem % 2 ? false : true;
  }
};

int main() {
  istream_iterator<int> in(cin), eos;
  vector<int> input;
  copy(in, eos, back_inserter(input));

  ofstream even_file("3_3_e.txt"), odd_file("3_3_o.txt");
  if (!even_file || !odd_file) {
    cerr << "error.\n";
    return -1;
  }

  vector<int>::iterator division = partition(input.begin(), input.end(), even_elem());
  ostream_iterator<int> even_iter(even_file, "\n"), odd_iter(odd_file, "\n");
  copy(input.begin(), division, even_iter);
  copy(division, input.end(), odd_iter);

  return 0;
}
