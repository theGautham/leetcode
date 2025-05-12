int fib(int n) {
    int f1 = 0;
    int f2 = 1;
    if (n < 0) {
        return -1;
    }
    if (n == 0) {
        return 0;
    }
    for (int i = 1; i < n; i++) {
        int fibo = f1 + f2;
        f1 = f2;
        f2 = fibo;
    }
    return f2;
}