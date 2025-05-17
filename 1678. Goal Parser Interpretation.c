char* interpret(char* command) {
    int len = strlen(command);
    char* s = malloc(len + 1);
    int s_index = 0;
    if (s == NULL) {
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        if (command[i] == 'G') {
            s[s_index++] = 'G';
        } else if (i + 1 < len && command[i] == '(' && command[i + 1] == ')') {
            s[s_index++] = 'o';
            i++;
        } else if (i + 3 < len && command[i] == '(' && command[i + 1] == 'a' &&
                   command[i + 2] == 'l' && command[i + 3] == ')') {
            s[s_index++] = 'a';
            s[s_index++] = 'l';
            i += 3;
        }
    }
    s[s_index] = '\0';
    return s;
}
