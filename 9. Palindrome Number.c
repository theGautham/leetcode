bool isPalindrome(int x) {
 
    if(x<0){
        return false;
    }
    if(x>0 && x%10==0){
        return false;
    }
     long reverse=0;
        int original=x;
        
    while(x>0){

        int digit=x%10;
        reverse= reverse * 10+ digit;
        x/=10;
    }
    return original==reverse;
    }