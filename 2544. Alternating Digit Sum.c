int alternateDigitSum(int n) {
    char digits[12];
    sprintf(digits, "%d", n);
    int sum = 0;
    int len = strlen(digits);

    for (int i = 0; i < len; i++) {
        int digit = digits[i] - '0';
        sum += (i % 2 == 0) ? digit : -digit;
    }
    return sum;
}