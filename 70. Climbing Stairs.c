int climbStairs(int n) {
    int prev = 1, curr = 1, temp;
    if (n <= 1) {
        return 1;
    }
    for (int i = 2; i <= n; i++) {
        temp = curr;
        curr = prev + curr;
        prev = temp;
    }
    return curr;
}