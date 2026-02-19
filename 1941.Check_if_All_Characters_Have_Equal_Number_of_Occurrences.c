
#include <stdbool.h>

bool areOccurrencesEqual(char* s) {
    int c[26] = {0};
    int i;

    // Count occurrences of each character
    for (i = 0; s[i] != '\0'; i++) {
        c[s[i] - 'a']++;
    }

    // Find the first non-zero frequency
    int expected = 0;
    for (i = 0; i < 26; i++) {
        if (c[i] != 0) {
            expected = c[i];
            break;
        }
    }

    // Check if all non-zero frequencies are equal
    for (i = 0; i < 26; i++) {
        if (c[i] != 0 && c[i] != expected) {
            return false;
        }
    }

    return true;
}
