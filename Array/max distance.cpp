int Solution::maximumGap(const vector<int> &A) {
    if(A.size()==0||A.size()==1)
    return -1;
    int n=A.size()-1,count=0,c=0;
      vector<int> v1 (A.size(), 0), v2(A.size(), 0);
    int i;
    // Fill the first array with minimum from the left
    v1[0] = A[0];
    for( i = 1 ; i < A.size(); i++)v1[i] = min(v1[i-1], A[i]);
    
    // Fill the second array with maximum from the right
    v2[A.size()-1] = A[A.size()-1];
    for( i = A.size()-2 ; i >= 0 ; i--)v2[i] = max(v2[i+1], A[i]);
   
    
        while(v2[j]>=v1[i])
        {
            count=j-i;
            j++;
        }
        if(c<count)
        c=count;
        
    
    return c;
}
