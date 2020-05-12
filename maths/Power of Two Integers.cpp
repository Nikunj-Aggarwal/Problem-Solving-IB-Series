int Solution::isPower(int A) {
    int x;
    for(int i=2;i<=A/2;i++)
    {
        for(int j=1;j<=INT_MAX/pow(j,i);j++)
        {
            if(A==pow(j,i))
            return true;
            
        }
    }
    return false;
}
