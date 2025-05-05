bool checkPerfectNumber(int num) {
    int sum = 1;
    if (num <= 1) {
        return false;
    }
    for (int div = 2; div * div <= num; div++) {
        if (num % div == 0) {
            sum += div;
            if (div * div != num) {
                sum += num / div;
            }
        }
    }
    return sum==num;
}
