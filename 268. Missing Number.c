int missingNumber(int* nums, int numsSize) {
    int n = numsSize;
    int sum_a = 0;
    int sum_n = n * (n + 1) / 2;

    for (int i = 0; i < n; i++) {
        sum_a += nums[i];
    }
    int miss_num = sum_n - sum_a;
    return miss_num;
}
