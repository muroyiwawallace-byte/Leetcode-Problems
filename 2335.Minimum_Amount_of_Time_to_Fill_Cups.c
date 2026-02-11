
int fillCups(int* amount, int amountSize) {
    int a = amount[0];
    int b = amount[1];
    int c = amount[2];

    int total = a + b + c;

    int maxVal = a;
    if (b > maxVal) maxVal = b;
    if (c > maxVal) maxVal = c;

    int half = (total + 1) / 2;

    return (maxVal > half) ? maxVal : half;
}
