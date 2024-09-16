#include <gtest/gtest.h>

#include "array_max.cpp"

TEST(Test, Simple) {
    int test_array_1[] = {1, 2, 3, 3, 1};
    int test_array_2[] = {1, 3, 6, 7, 9, 3, 6, 5, 7, 4, 2, 54, 9, 7, 5, 7};
    int test_array_3[] = {13, 6, 8, -8, 64, 4, 2, 7, 10, 22, 31, 2, 0, -10};
    int test_array_4[] = {0, -1, -2, -3, -4, -5, -6, -7, -8};
    ASSERT_EQ(array_max(test_array_1, 5), 3);    // Stack []
    ASSERT_EQ(array_max(test_array_2, 16), 54);  // Stack []
    ASSERT_EQ(array_max(test_array_3, 14), 64);  // Stack []
    ASSERT_EQ(array_max(test_array_4, 9), 0);    // Stack []
}
