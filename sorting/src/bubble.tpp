// The algorithm traverses a list and compares adjacent values,
// swapping them if they are not in the correct order.

#include "sorting.hpp"
template <class FwdIt, class Compare = std::less<>>
void bubbleSort(FwdIt first, FwdIt last, Compare cmp) {
  int n = last - first;
  for (int k = 0; k < n - 1; k++) {
    for (int i = 0; i < n - k - 1; i++) {
      if (cmp(*(first + i + 1), *(first + i)))
        std::iter_swap(first + i, first + i + 1);
    }
  }
}