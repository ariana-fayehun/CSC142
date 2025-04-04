#include <cstdio>
#include "08_01_fibonacci.h"

int main() {
    for (const auto i : FibonacciRange{ 5000 }) {
        printf("%d ", i);
    }
}