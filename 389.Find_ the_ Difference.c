
char findTheDifference(char* s, char* t) {
    char result = 0;
    int i = 0;

    // XOR all characters in s to fine the left over 
    while(s[i] != '\0') {
        result ^= s[i];
        i++;
    }

    i = 0;
    // XOR all characters in t to detect the extra character
    while(t[i] != '\0') {
        result ^= t[i];
        i++;
    }

    return result;
}
