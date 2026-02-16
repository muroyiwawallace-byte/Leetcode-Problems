


    int minOperations(int* nums, int numsSize) {
    int operations = 0;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] <= nums[i - 1]) {
            int needed = nums[i - 1] + 1 - nums[i];
            operations += needed;
            nums[i] += needed;   // update value
        }
    }

    return operations;
}
