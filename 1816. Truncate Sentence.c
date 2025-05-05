char* truncateSentence(char* s, int k) {
    int len = strlen(s);
    int wordCount = 0;
    int i = 0;

    while (i < len && s[i] == ' ') {
        i++;
    }
    while (i < len && wordCount < k) {
        while (i < len && s[i] != ' ') {
            i++;
        }
        wordCount++;
        while (i < len && s[i] == ' ') {
            i++;
        }
    }
    if (i > 0 && s[i - 1] == ' ') {
        i--;
    };
    char* ans = malloc((i + 1) * sizeof(char));
    if (ans == NULL) {
        return NULL;
    }
    strncpy(ans, s, i);
    ans[i] = '\0';
    return ans;
}