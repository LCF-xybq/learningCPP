#include <iostream>
#include <vector>
using namespace std;

const vector<int>* pentagonal(int n) {
  static vector<int> nums;
  for (int i = n; i >= 1; i--) {
    nums.push_back(i * (3 * i - 1) / 2);
  }
  return &nums;
}

int func(int x) {
  const vector<int>* res = pentagonal(5);
  if (x < 0 || x >= 5) return -1;
  return (*res)[x];
}

int main() {
  int res = func(3);
  cout << res << endl;

  return 0;
}
