int Solution::maxSubArray(const vector<int> &A) {
    int max1=-1001,lmax=0;
    for(int i=0;i<A.size();i++){
        lmax=max(A[i],lmax+A[i]);
       
            max1=max(lmax,max1);
            
        
    }
    return max1;
}
