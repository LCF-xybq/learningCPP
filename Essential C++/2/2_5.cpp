#include <iostream>
#include <vector>
using namespace std;

template<typename type>
inline type max(vector<type> nums) {
  type Max = INT_MIN;
  for (int i = 0; i < nums.size(); i++) {
    if (Max < nums[i]) {
      Max = nums[i];
    }
  }
  return Max;
}

int main() {
  int a[6] = {1, 23, 9, 56, 33, 21};
  vector<int> nums(a, a + 6);
  int res = max(nums);
  cout << res << endl;

  return 0;
}
