#include <gtest/gtest.h>
#include "increase_vector_elements.h"

// Тест для функции increaseVectorElements
TEST(IncreaseVectorElementsTest, BasicTest) {
std::vector<int> input = {1, 2, 3, 4, 5};
int n = 10;
std::vector<int> expected = {11, 12, 13, 14, 15};
EXPECT_EQ(increaseVectorElements(input, n), expected);
}

TEST(IncreaseVectorElementsTest, NegativeIncrement) {
std::vector<int> input = {5, 10, 15};
int n = -5;
std::vector<int> expected = {0, 5, 10};
EXPECT_EQ(increaseVectorElements(input, n), expected);
}

TEST(IncreaseVectorElementsTest, ZeroIncrement) {
std::vector<int> input = {1, 2, 3};
int n = 0;
std::vector<int> expected = {1, 2, 3};
EXPECT_EQ(increaseVectorElements(input, n), expected);
}

TEST(IncreaseVectorElementsTest, EmptyVector) {
std::vector<int> input = {};
int n = 10;
std::vector<int> expected = {};
EXPECT_EQ(increaseVectorElements(input, n), expected);
}
