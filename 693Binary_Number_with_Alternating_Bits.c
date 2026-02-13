#include <stdbool.h>

bool hasAlternatingBits(int n) {
    int prev = n & 1; // last bit
    n >>= 1;          

    while (n > 0) {
        int curr = n & 1;       // current bit
        if ((curr ^ prev) != 1) return false; // consecutive bits not alternating
        prev = curr;
        n >>= 1;
    }

    return true;
}
