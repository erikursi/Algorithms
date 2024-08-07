CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17 -pedantic -g

GTEST_FLAGS =
OS = $(shell uname -s)
ifeq ($(OS), Linux)
	GTEST_FLAGS = -lgtest_main -lgtest -lpthread -lm
else
	GTEST_FLAGS = -lgtest_main -lgtest
endif


SRC_DIR=./
TEST_DIR=tests/
TEST_FILES=$(shell find $(TEST_DIR) \( -name "*.cpp" \))
SRC_FILES=$(shell find $(SRC_DIR) \( -name "*.cpp" \))
TEST_EXE=$(TEST_DIR)bin/tests.out

all: tests
# By default, this target runs all tests.
#
# You can use 'test_name' parameter to run specific tests.
#
# To run a specific Test:
#     make tests test_name=MyTestSuite.MyTestCase
#
# To run a specific TestSuite:
#     make tests test_name=MyTestSuite
$(TEST_EXE): $(SRC_FILES) $(TEST_FILES)
	mkdir -p $(TEST_DIR)bin/
	$(CXX) $(CXXFLAGS) $^ $(GTEST_FLAGS) -o $@

tests: $(TEST_EXE)
	./$< $(if $(test_name),--gtest_filter=$(test_name)*)

clean:
	find ./ \( -name "*.o" -o -name "*.exe" -o -name "*.a" -o -name "*.out" \) -delete
	rm -rf $(TEST_DIR)bin/

.PHONY: all tests clean