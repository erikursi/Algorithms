// Find the smallest element in the array and swap it with the first element.
// Find the second smallest element and swap with with the second element in the
// array. Find the third smallest element and swap wit with the third element in
// the array.
// Repeat the process of finding the next smallest element and swapping it into
// the correct position until the entire array is sorted.

#include "sorting.h"
void selectionSort(std::vector<int> &nums) {
  int n = nums.size();
  for (int i = 0; i < n - 1; i++) {
    int min_i = i;
    for (int k = i + 1; k < n; k++) {
      if (nums[k] < nums[min_i]) {
        min_i = k;
      }
    }
    std::swap(nums[i], nums[min_i]);
  }
}