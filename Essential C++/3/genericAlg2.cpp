#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

vector<int> filter(const vector<int> &vec, int val) {
  vector<int> local_vec(vec);
  sort(local_vec.begin(), local_vec.end());
  vector<int>::iterator iter = find_if(local_vec.begin(), local_vec.end(), bind2nd(greater<int>(), val));
  local_vec.erase(iter, local_vec.end());
  return local_vec;
}

int main() {
  int a[6] = {1, 2, 3, 4, 5, 6};
  vector<int> test(a, a + 6);
  vector<int> res(6);

  res = filter(test, 3);
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << endl;
  }

  return 0;
}
