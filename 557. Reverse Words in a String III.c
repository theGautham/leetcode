char* reverseWords(char* s) {
   int len=strlen(s);
   int start=0;
   for(int i=0;i<=len;i++){
    if(s[i]==' ' || s[i]=='\0'){
        for(int j=start,k=i-1;j<k;j++,k--){
            char temp=s[j];
            s[j]=s[k];
            s[k]=temp;
        }
        start=i+1;
    }
   }
  return s; 
}