int maxDepth(char* s) {
    int current_depth=0;
    int max_depth=0;

    for(int i=0;i< strlen(s);i++){
        if(s[i]=='('){
            current_depth++;
            if(current_depth>max_depth){
                max_depth=current_depth;
            }
        }else if(s[i]==')'){
            current_depth--;
        }
    }
    return max_depth;
}