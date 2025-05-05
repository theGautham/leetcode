int cmp(const void* a, const void* b) { 
    return (*(int*)a - *(int*)b); 
}
int* numberGame(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* ans = (int*)malloc(numsSize * sizeof(int));

    qsort(nums, numsSize, sizeof(int), cmp);

    for (int i = 0; i < numsSize; i += 2) {
        ans[i] = nums[i+1];
        ans[i+1] = nums[i];
    }

return ans;
}