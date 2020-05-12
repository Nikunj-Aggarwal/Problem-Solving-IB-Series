int Solution::gcd(int A, int B) {
    int g=0,x,s=0;
    if (A==0&B!=0)
    return B;
    if (A!=0&B==0)
    return A;
    while(A!=0)
    {
        g=B;
        B=A;
        A=g%A;
    }
    return B;
}
