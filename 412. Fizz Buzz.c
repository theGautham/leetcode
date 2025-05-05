char** fizzBuzz(int n, int* returnSize) {
    * returnSize=n;
    char** ans=(char**)malloc(n*sizeof(char*));
    
    for (int i=0;i<n;i++){
        int num=i+1;
         if(num%3==0 && num%5==0){
            ans[i]=(char*)malloc(9*sizeof(char));
            strcpy(ans[i],"FizzBuzz");
         }
         else if(num%3==0){
            ans[i]=(char*)malloc(5*sizeof(char));
            strcpy(ans[i],"Fizz");
         }
         else if(num%5==0){
            ans[i]=(char*)malloc(5*sizeof(char));
            strcpy(ans[i],"Buzz");
         }
         else{
            ans[i]=(char*)malloc(11*sizeof(char));
            sprintf(ans[i],"%d",num);
         }
    }
return ans;
}