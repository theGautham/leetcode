bool isPerfectSquare(int num) {
    if (num < 0) {
        return false;
    }
    double root = sqrt(num);
    return (root == (int)root);
}