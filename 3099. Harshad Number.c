int sumOfTheDigitsOfHarshadNumber(int x) {
  int sum=0;
  int  org=x;

  while(x>0){
    sum+=x%10;
    x/=10;
  } 
  if(sum!=0 && org%sum==0){
    return sum;
  }else{
    return -1;
  }
  }
