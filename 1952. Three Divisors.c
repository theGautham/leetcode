bool isThree(int n) {
   int sqrt_n=(int)sqrt(n);

   if(sqrt_n*sqrt_n!=n){
    return false;
   }
   if(sqrt_n<2){
    return false;
   }
   for(int i=2;i*i<=sqrt_n;i++){
    if(sqrt_n%i==0){
        return false;
    }
   }
   return true;
}