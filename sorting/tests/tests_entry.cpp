#include "tests_entry.hpp"

TEST(selection, test1) {
  std::vector v1{100, 35, 500, 9, 67, 20};
  std::vector v2{25, 0, 500, 56, 98};
  std::vector v1_exp{9, 20, 35, 67, 100, 500};
  std::vector v2_exp{0, 25, 56, 98, 500};

  //   printVector(v1);
  selectionSort(v1.begin(), v1.end());
  EXPECT_EQ(v1, v1_exp);
  //   printVector(v1);

  //   printVector(v2);
  selectionSort(v2.begin(), v2.end());
  EXPECT_EQ(v2, v2_exp);
  //   printVector(v2);
}

TEST(bubble, test1) {
  std::vector v1{100, 35, 500, 9, 67, 20};
  std::vector v2{25, 0, 500, 56, 98};
  std::vector v1_exp{9, 20, 35, 67, 100, 500};
  std::vector v2_exp{0, 25, 56, 98, 500};

  //   printVector(v1);
  bubbleSort(v1.begin(), v1.end());
  EXPECT_EQ(v1, v1_exp);
  //   printVector(v1);

  //   printVector(v2);
  bubbleSort(v2.begin(), v2.end());
  EXPECT_EQ(v2, v2_exp);
  //   printVector(v2);
}

TEST(insertion, test1) {
  std::vector v1{100, 35, 500, 9, 67, 20};
  std::vector v2{25, 0, 500, 56, 98};
  std::vector v1_exp{9, 20, 35, 67, 100, 500};
  std::vector v2_exp{0, 25, 56, 98, 500};

  //   printVector(v1);
  insertionSort(v1.begin(), v1.end());
  EXPECT_EQ(v1, v1_exp);
  //   printVector(v1);

  //   printVector(v2);
  insertionSort(v2.begin(), v2.end());
  EXPECT_EQ(v2, v2_exp);
  //   printVector(v2);
}