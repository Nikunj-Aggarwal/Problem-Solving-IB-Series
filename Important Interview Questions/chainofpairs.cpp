static bool comp5(vector<int>&A,vector<int>&B)
{
    if(A[0]==B[0])
    {
        return A[1]<B[1];
    }
    return A[0]<B[0];
}

int Solution::solve(vector<vector<int> > &A) 
{
    int n= A.size();
   // sort(A.begin(),A.end(),comp5);
    int dp[n+2];
    for(int i=0;i<=n;i++)
    {
        dp[i]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(A[i][0]>A[j][1])
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
      //  cout<<dp[i]<<" ";
    }
    int ans=1;
    for(int i=1;i<n;i++)
    {
        ans=max(ans,dp[i]);
    }
    return ans;
}