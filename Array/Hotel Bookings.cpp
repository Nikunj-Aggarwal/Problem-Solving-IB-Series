bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector< pair<int,int>> A;
    int x=0,active=0;
    for(int i=0;i<arrive.size();i++){
        A.push_back(make_pair(arrive[i],1));
        A.push_back(make_pair(depart[i],0));
    }
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++){
    if(A[i].second==1){
        x++;
        active=max(active,x);
    }
    else
        x--;
    }
    
    if(active>K){
        return false;
    }
    return true;
    
}
