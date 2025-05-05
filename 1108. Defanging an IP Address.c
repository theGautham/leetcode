char * defangIPaddr(char * address){
    int len=strlen(address);
    int newLen=len+2*3;
    char* result=(char*)malloc((newLen+1)*sizeof(char));
    int j=0;
    for(int i=0;i<len;i++){
        if(address[i]=='.'){
            result[j++]='[';
            result[j++]='.';
            result[j++]=']';
        }else{
            result[j++]=address[i];
        }
    }
    result[j]='\0';
    return result;
}