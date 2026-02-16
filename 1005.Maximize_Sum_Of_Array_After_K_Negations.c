int largestSumAfterKNegations(int* nums, int numsSize, int k) {

    while (k > 0) {
        int minIndex = 0;

        // Find index of smallest element
        for (int i = 1; i < numsSize; i++) {
            if (nums[i] < nums[minIndex]) {
                minIndex = i;
            }
        }

        // Flip it
        nums[minIndex] = -nums[minIndex];

        k--;
    }

    int sum = 0;

    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }

    return sum;
}
