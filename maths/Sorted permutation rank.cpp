#define mod 1000003
int factorial(int n){
    if(n<=1) return 1;
    return (n*factorial(n-1))%mod;
}
int Solution::findRank(string A) {
    //brute force 
    //int rank=1;
    // string s=A;
    // sort(s.begin(),s.end());
    // while(true){
    //using stl function     if(next_permutation(s.begin(),s.end())) break;
    //     rank++;
    // }
    // return rank;
    int ans=0;
    for(int i=0;i<A.size();i++){
        int count =0;
        for(int j=i+1;j<A.size();j++){
            if(A[j]<A[i]){
                count++;
            }
        }
        ans=(ans+(count*factorial(A.size()-i-1))%mod)%mod;
    }
    return ans+1;
}
