int Solution::trailingZeroes(int A) {
    long int c=0,j=1;
    for(int i=A;i!=0;i--)
    {
        if(i%5==0)
      {  c+=i/(pow(5,j));
        j++;}
    }
    return c;
}
