#include "sorting.hpp"
template <class FwdIt, class Compare = std::less<>>
void mergeSort(FwdIt first, FwdIt last, Compare cmp) {
  int n = last - first;
  if (n <= 1) return;
  int mid = n / 2;
  auto mid_it = first + mid;
  mergeSort(first, mid_it);
  mergeSort(mid_it, last);
  _merge(first, mid_it, last, cmp);
}

template <class FwdIt, class Compare = std::less<>>
void _merge(FwdIt first, FwdIt mid_it, FwdIt last, Compare cmp) {
  int n = last - first;
  if (n <= 1) return;
  std::vector half1(first, mid_it);
  std::vector half2(mid_it, last);
  auto half1_it = half1.begin();
  auto half2_it = half2.begin();
  for (int i = 0; i < n; i++) {
    if (half1_it != half1.end() && half2_it != half2.end()) {
      if (cmp(*half1_it, *half2_it)) {
        *(first + i) = *half1_it;
        half1_it++;
      } else {
        *(first + i) = *half2_it;
        half2_it++;
      }
    } else if (half1_it != half1.end()) {
      *(first + i) = *half1_it;
      half1_it++;
    } else if (half2_it != half2.end()) {
      *(first + i) = *half2_it;
      half2_it++;
    }
  }
}