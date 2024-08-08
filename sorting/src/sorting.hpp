#ifndef SORTING_HPP
#define SORTING_HPP
#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

template <class FwdIt, class Compare = std::less<>>
void selectionSort(FwdIt first, FwdIt last, Compare cmp = Compare{});
template <class FwdIt, class Compare = std::less<>>
void bubbleSort(FwdIt first, FwdIt last, Compare cmp = Compare{});
template <class FwdIt, class Compare = std::less<>>
void insertionSort(FwdIt first, FwdIt last, Compare cmp = Compare{});
// template <class FwdIt, class Compare = std::less<>>
// void mergeSort(FwdIt first, FwdIt last, Compare cmp = Compare{});

template <class FwdIt>
void printContainer(FwdIt first, FwdIt last);

#endif  // SORTING_HPP