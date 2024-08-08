#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP
#include "src/bubble.tpp"
#include "src/insertion.tpp"
#include "src/merge.tpp"
#include "src/selection.tpp"
#include "src/sorting.hpp"
#include "src/utility.tpp"

template void selectionSort(std::vector<int>::iterator &first,

                            std::vector<int>::iterator &last, std::less<int>);
// template void mergeSort(std::vector<int>::iterator &first,
//                         std::vector<int>::iterator &last, std::less<int>);
template void bubbleSort(std::vector<int>::iterator &first,
                         std::vector<int>::iterator &last, std::less<int>);
template void insertionSort(std::vector<int>::iterator &first,
                            std::vector<int>::iterator &last, std::less<int>);
template void printContainer(std::vector<int>::iterator &first,
                             std::vector<int>::iterator &last);
#endif  // TEMPLATES_HPP