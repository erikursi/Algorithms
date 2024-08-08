#include "tests_entry.hpp"

class FullSorting : public testing::Test {
 protected:
  void SetUp() override {
    v1_ = {100, 35, 500, 9, 67, 20};
    v2_ = {25, 0, 500, 56, 98};
    v3_ = {72, 43, 4, 1, 5};
    v1_exp_ = {9, 20, 35, 67, 100, 500};
    v2_exp_ = {0, 25, 56, 98, 500};
    v3_exp_ = {72, 43, 1, 4, 5};
  }

  std::vector<int> v1_;
  std::vector<int> v2_;
  std::vector<int> v3_;
  std::vector<int> v1_exp_;
  std::vector<int> v2_exp_;
  std::vector<int> v3_exp_;
};

class PartialSorting : public testing::Test {
 protected:
  void SetUp() override {
    shift1_ = 2;
    v1_ = {72, 43, 4, 1, 5};
    v1_exp_ = {72, 43, 1, 4, 5};
    shift2_ = 3;
    v2_ = {72, 43, 4, 1, 5, 0};
    v2_exp_ = {72, 43, 4, 0, 1, 5};
  }
  int shift1_;
  std::vector<int> v1_;
  std::vector<int> v1_exp_;
  int shift2_;
  std::vector<int> v2_;
  std::vector<int> v2_exp_;
};

TEST_F(FullSorting, selection_1) {
  EXPECT_NE(v1_, v1_exp_);
  selectionSort(v1_.begin(), v1_.end());
  EXPECT_EQ(v1_, v1_exp_);

  EXPECT_NE(v2_, v2_exp_);
  selectionSort(v2_.begin(), v2_.end());
  EXPECT_EQ(v2_, v2_exp_);
}

TEST_F(FullSorting, bubble_1) {
  EXPECT_NE(v1_, v1_exp_);
  bubbleSort(v1_.begin(), v1_.end());
  EXPECT_EQ(v1_, v1_exp_);

  EXPECT_NE(v2_, v2_exp_);
  bubbleSort(v2_.begin(), v2_.end());
  EXPECT_EQ(v2_, v2_exp_);
}

TEST_F(FullSorting, insertion_1) {
  EXPECT_NE(v1_, v1_exp_);
  insertionSort(v1_.begin(), v1_.end());
  EXPECT_EQ(v1_, v1_exp_);

  EXPECT_NE(v2_, v2_exp_);
  insertionSort(v2_.begin(), v2_.end());
  EXPECT_EQ(v2_, v2_exp_);
}

TEST_F(PartialSorting, selection_1) {
  EXPECT_NE(v1_, v1_exp_);
  selectionSort(v1_.begin() + shift1_, v1_.end());
  EXPECT_EQ(v1_, v1_exp_);

  EXPECT_NE(v2_, v2_exp_);
  selectionSort(v2_.begin() + shift2_, v2_.end());
  EXPECT_EQ(v2_, v2_exp_);
}

TEST_F(PartialSorting, bubble_1) {
  EXPECT_NE(v1_, v1_exp_);
  bubbleSort(v1_.begin() + shift1_, v1_.end());
  EXPECT_EQ(v1_, v1_exp_);

  EXPECT_NE(v2_, v2_exp_);
  bubbleSort(v2_.begin() + shift2_, v2_.end());
  EXPECT_EQ(v2_, v2_exp_);
}

TEST_F(PartialSorting, insertion_1) {
  EXPECT_NE(v1_, v1_exp_);
  insertionSort(v1_.begin() + shift1_, v1_.end());
  EXPECT_EQ(v1_, v1_exp_);

  EXPECT_NE(v2_, v2_exp_);
  insertionSort(v2_.begin() + shift2_, v2_.end());
  EXPECT_EQ(v2_, v2_exp_);
}