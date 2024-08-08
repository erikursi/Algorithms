#include "sorting.hpp"
template <class FwdIt, class Compare = std::less<>>
void selectionSort(FwdIt first, FwdIt last, Compare cmp) {
  int n = last - first;
  for (int i = 0; i < n - 1; i++) {
    int min_i = i;
    for (int k = i + 1; k < n; k++) {
      if (cmp(*(first + k), *(first + min_i))) {
        min_i = k;
      }
    }
    std::iter_swap(first + i, first + min_i);
  }
}