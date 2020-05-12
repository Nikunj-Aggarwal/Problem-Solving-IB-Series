int Solution::reverse(int A) {
    int rev=0;
    for(int i=A;i!=0;i=i/10)
    {
        rev=rev*10+i%10;
    }
    if(rev>INT_MAX||rev<INT_MIN)
    return 0;
    else
    return rev;
}
