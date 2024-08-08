#include "tests_entry.hpp"

class Sorting : public testing::Test {
 protected:
  void SetUp() override {
    v1_ = {100, 35, 500, 9, 67, 20};
    v2_ = {25, 0, 500, 56, 98};
    v1_exp_ = {9, 20, 35, 67, 100, 500};
    v2_exp_ = {0, 25, 56, 98, 500};
  }

  std::vector<int> v1_;
  std::vector<int> v2_;
  std::vector<int> v1_exp_;
  std::vector<int> v2_exp_;
};

TEST_F(Sorting, selection_1) {
  EXPECT_NE(v1_, v1_exp_);
  selectionSort(v1_.begin(), v1_.end());
  EXPECT_EQ(v1_, v1_exp_);

  EXPECT_NE(v2_, v2_exp_);
  selectionSort(v2_.begin(), v2_.end());
  EXPECT_EQ(v2_, v2_exp_);
}

TEST_F(Sorting, bubble_1) {
  EXPECT_NE(v1_, v1_exp_);
  bubbleSort(v1_.begin(), v1_.end());
  EXPECT_EQ(v1_, v1_exp_);

  EXPECT_NE(v2_, v2_exp_);
  bubbleSort(v2_.begin(), v2_.end());
  EXPECT_EQ(v2_, v2_exp_);
}

TEST_F(Sorting, insertion_1) {
  EXPECT_NE(v1_, v1_exp_);
  insertionSort(v1_.begin(), v1_.end());
  EXPECT_EQ(v1_, v1_exp_);

  EXPECT_NE(v2_, v2_exp_);
  insertionSort(v2_.begin(), v2_.end());
  EXPECT_EQ(v2_, v2_exp_);
}