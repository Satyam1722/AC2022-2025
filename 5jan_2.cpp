int convertFive(int n) {
    // Your code here
    int sum=0;
    while(n)
    {
        int r=n%10;
        sum*=10;
        if(r==0)
        sum=sum+5;
        else
        sum=sum+r;
        n/=10;
    }
    n=sum;
    sum=0;
   while(n)
    {
        int r=n%10;
        sum*=10;
        sum=sum+r;
        n/=10;
    }
    
   return sum;
    
}   