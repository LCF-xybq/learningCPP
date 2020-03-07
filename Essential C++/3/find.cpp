#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <typename IteratorType, typename elemType>
IteratorType find(IteratorType first, IteratorType last, const elemType &value) {
  for (; first != last; ++first) {
    if (value == *first) {
      return first;
    }
  }
  return last;
}

int main() {
  const int asize = 8;
  int ia[asize] = {1, 1, 2, 3, 5, 6, 7, 8};
  vector<int> vec(ia, ia + asize);
  list<int> li(ia, ia + asize);
  int *p = find(ia, ia + asize, 5);
  if (p != ia + asize) {
    cout << *p << endl;
  }

  vector<int>::iterator it;
  it = find(vec.begin(), vec.end(), 6);
  if (it != vec.end()) {
    cout << *it << endl;
  }

  list<int>::iterator l;
  l = find(li.begin(), li.end(), 8);
  if (l != li.end()) {
    cout << *l << endl;
  }

  return 0;
}
