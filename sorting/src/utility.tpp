#include "sorting.hpp"

template <class FwdIt>
void printContainer(FwdIt first, FwdIt last) {
  for (auto it = first; it != last; ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}