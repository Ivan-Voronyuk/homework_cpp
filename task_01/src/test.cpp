#include <gtest/gtest.h>

#include "median.hpp"

TEST(Test, Simple) {
  ASSERT_EQ(MedianOf3(1, 2, 3), 2);
  ASSERT_EQ(MedianOf3(1, 3, 2), 2);
  ASSERT_EQ(MedianOf3(2, 0, 3), 2);
  ASSERT_EQ(MedianOf3(5, 6, 7), 6);
}
