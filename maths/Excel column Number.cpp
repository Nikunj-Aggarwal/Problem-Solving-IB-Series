int Solution::titleToNumber(string A) {
    int n=A.size();
    string str=A;
  long int j=n-1,res=0;
    for(int i=0;i<n;i++)
    {
        int x=str[i]-'A'+1;
         res+=pow(26,j)*x;
        j--;
    }
    return res;
    
}
