#include <iostream>
#include <vector>
using namespace std;

inline bool check(int n) {
  return n >= 1 && n <= 127;
}

void pentagonal(vector<int>& nums, int n) {
  if (!check(n)) cerr << "error\n";
  for (int i = n; i >= 1; i--) {
    nums.push_back(i * (3 * i - 1) / 2);
  }
}

void print(vector<int> nums, string type) {
  for (int i = nums.size() - 1; i >= 0; i--) {
    cout << nums[i] << endl;
  }
}

int main() {
  vector<int> nums;
  pentagonal(nums, 5);
  print(nums, "int");

  return 0;
}
