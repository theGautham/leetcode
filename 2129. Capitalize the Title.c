char* capitalizeTitle(char* title) {
    int len = strlen(title);
    char* ans = (char*)malloc(len + 1);
    int wordStart = 0,i=0;
    while (i <= len) {
        if (title[i] == ' ' || title[i] == '\0') {
            int wordLen = i - wordStart;
            if (wordLen <= 2) {
                for (int j = wordStart; j < i; j++) {
                    ans[j] = tolower(title[j]);
                }
            } else {
                ans[wordStart] = toupper(title[wordStart]);
                for (int j = wordStart + 1; j < i; j++) {
                    ans[j] = tolower(title[j]);
                }
            }
            if (title[i] == ' ') {
                ans[i] = ' ';
            }
            wordStart = i + 1;
        }
        i++;
    }
    ans[len] = '\0';
    return ans;
}
