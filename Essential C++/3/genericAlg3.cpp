#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
#include <vector>
using namespace std;

template <typename InputIterator, typename OutputIterator, typename ElemType, typename Comp>
OutputIterator filter(InputIterator first, InputIterator last, OutputIterator at, const ElemType &val, Comp pred) {
  while ((first = find_if(first, last, bind2nd(pred, val))) != last) {
    cout << "found value: " << *first << endl;
    *at++ = *first++;
  }
  return at;
}

int main() {
  int a[6] = {1, 2, 3, 4, 5, 6};
  int a2[6];
  vector<int> test(a, a + 6);
  vector<int> res;   // vector<int> res; --> wrong or using back_inserter

  filter(a, a + 6, a2, 4, less<int>());
  cout << "--------------" << endl;
  filter(test.begin(), test.end(), back_inserter(test), 4, greater<int>());

  return 0;
}

