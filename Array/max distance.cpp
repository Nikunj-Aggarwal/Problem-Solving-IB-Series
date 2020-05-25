int Solution::maximumGap(const vector<int> &A) {
    if(A.size()==0)
    return -1;
    if(A.size()==1)
    return 0;
     vector<pair<int, int> > toSort; 
     for(int i=0;i<A.size();i++){
         toSort.push_back(make_pair(A[i],i));
     }
     sort(toSort.begin(),toSort.end());
     
    int c=0,x=toSort[toSort.size()-1].second;
    for(int i=toSort.size()-2;i>=0;i--){
        
        c=max(c,x-toSort[i].second);
        x=max(x,toSort[i].second);
    }
    // for(int i=0;i<A.size();i++){
    //     if(A[i]<=A[A.size()-i-1]){
    //     c=(A.size()-i-1)-i;
    //     break;
    //     }
    // }
    //   if (num.size() == 0) return -1;
    //         if (num.size() == 1) return 0;
    //         vector<pair<int, int> > toSort; 
    //         for (int i = 0; i < num.size(); i++) {
    //             toSort.push_back(make_pair(num[i], i));
    //         }
    //         sort(toSort.begin(), toSort.end());
    //         int len = toSort.size();
    //         int maxIndex = toSort[len - 1].second;
    //         int ans = 0;
    //         for (int i = len - 2; i >= 0; i--) {
    //             ans = max(ans, maxIndex - toSort[i].second);
    //             maxIndex = max(maxIndex, toSort[i].second);
    //         }
    //         return ans;
    
    return c;
}
