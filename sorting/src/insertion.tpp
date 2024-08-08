// In Insertion sort, you compare the key element with the previous elements. If
// the previous elements are greater than the key element, then you move the
// previous element to the next position.
#include "sorting.hpp"
template <class FwdIt, class Compare = std::less<>>
void insertionSort(FwdIt first, FwdIt last, Compare cmp) {
  int n = last - first;
  for (int i = 1; i < n; i++) {
    int k = 1;
    if (cmp(*(first + i), *(first + i - k)))
      std::iter_swap(first + i, first + i - k);
    while (i - k > 0 && cmp(*(first + i - k), *(first + i - k - 1))) {
      std::iter_swap(first + i - k, first + i - k - 1);
      k++;
    }
  }
}