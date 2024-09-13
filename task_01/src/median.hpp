#include <utility>
int MedianOf3(int num_A, int num_B, int num_C) {
  // Implement a simple bubble sort algorythm
  //    as one of the most reliable
  // Sorting order: A > B > C
  if (num_A < num_B)
    std::swap(num_A, num_B);
  if (num_B < num_C)
    std::swap(num_B, num_C);
  if (num_A < num_B)
    std::swap(num_A, num_B);
  return num_B;
}
