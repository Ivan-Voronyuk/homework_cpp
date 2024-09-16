#include <cassert>

int array_max(int *array, int n) {
    assert(n > 0 && "Calculating maximum of zero (or degative) length array");
    int max_value = array[0];
    for (int i = 1; i < n; ++i)
        if (array[i] > max_value) max_value = array[i];
    return max_value;
}
