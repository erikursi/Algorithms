// The algorithm traverses a list and compares adjacent values,
// swapping them if they are not in the correct order.

#include "sorting.h"
void bubbleSort(std::vector<int> &nums) {
  int n = nums.size();
  for (int k = 0; k < n - 1; k++) {
    for (int i = 0; i < n - k - 1; i++) {
      if (nums[i] > nums[i + 1]) std::swap(nums[i], nums[i + 1]);
    }
  }
}