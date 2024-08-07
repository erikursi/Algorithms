// In Insertion sort, you compare the key element with the previous elements. If
// the previous elements are greater than the key element, then you move the
// previous element to the next position.
#include "sorting.h"
void insertionSort(std::vector<int> &nums) {
  int n = nums.size();
  for (int i = 1; i < n; i++) {
    int k = 1;
    if (nums[i] < nums[i - k]) std::swap(nums[i], nums[i - k]);
    while (i - k > 0 && nums[i - k] < nums[i - k - 1]) {
      std::swap(nums[i - k], nums[i - k - 1]);
      k++;
    }
  }
}