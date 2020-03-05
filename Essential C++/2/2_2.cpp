#include <iostream>
#include <vector>
using namespace std;

void pentagonal(vector<int>& nums, int n) {
  if (n < 1 || n > 128) {
    cerr << "n is too big\n";
  } else {
    for (int i = n; i >= 1; i--) {
      nums.push_back(i * (3 * i - 1) / 2);
    }
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
