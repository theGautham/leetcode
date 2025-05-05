int differenceOfSum(int* nums, int numsSize) {
   int esum=0;
   int dsum=0;

   for(int i=0;i<numsSize;i++){
    esum += nums[i];
    int num=nums[i];
    while(num>0){
        dsum += num%10; 
        num /= 10;
    }
   }
   return abs(esum-dsum);
}