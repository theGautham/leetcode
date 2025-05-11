bool detectCapitalUse(char* word) {
    if(word==NULL){
        return false;
    }
    int upperCount=0;
    int len=0;
    for(int i=0;word[i]!='\0';i++){
        if(isupper(word[i])){
            upperCount++;
        }
        len++;
    }
    return (upperCount==len) || (upperCount==0) || (upperCount==1 && len>0 && isupper(word[0])); 
}