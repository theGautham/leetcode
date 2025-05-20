char findTheDifference(char* s, char* t) {
    int result = 0;
    while (*s) {
        result ^= *s++;
    }
    while (*t) {
        result ^= *t++;
    }
    return result;
}