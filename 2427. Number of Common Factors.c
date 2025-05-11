int commonFactors(int a, int b) {
    int fa[100], fb[100];
    int i = 0, j = 0;
    int count = 0;
    for (int x = 1; x <= a; x++) {
        if (a % x == 0) {
            fa[i] = x;
            i++;
        }
    }
    for (int x = 1; x <= b; x++) {
        if (b % x == 0) {
            fb[j] = x;
            j++;
        }
    }
    for (int m = 0; m < i; m++) {
        for (int n = 0; n < j; n++) {
            if (fa[m] == fb[n]) {
                count++;
            }
        }
    }
    return count;
}