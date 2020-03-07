#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool less_than(int v1, int v2) {
  return v1 < v2 ? true : false;
}

bool greater_than(int v1, int v2) {
  return v1 > v2 ? true : false;
}

vector<int> filter(const vector<int> &vec, int filter_value, bool (*pred)(int, int)) {
  vector<int> nvec;
  for (int ix = 0; ix < vec.size(); ++ix) {
    if (pred(vec[ix], filter_value)) {
      nvec.push_back(vec[ix]);
    }
  }
  return nvec;
}

int count_occurs(const vector<int> &vec, int val) {
  vector<int>::const_iterator iter = vec.begin();
  int occurs_count = 0;
  while ((iter = find(iter, vec.end(), val)) != vec.end()) {
    ++occurs_count;
    ++iter;
  }
  return occurs_count;
}

int main() {
  int a[6] = {1, 2, 3, 4, 5, 6};
  vector<int> test(a, a + 6);
  vector<int> res;
  res = filter(test, 4, greater_than);
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << endl;
  }

  return 0;
}
