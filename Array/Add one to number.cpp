vector<int> Solution::plusOne(vector<int> &A) {
    int x=1;
     int y=0;
    if(A.size()<1){
        A.push_back(1);
    return A;
    }
    vector<int> B;
    for(int i=A.size()-1;i>=0;i--){
        if(A[i]!=9 && x>0){
            A[i]=A[i]+1;
            B.push_back(A[i]);
            x--;
        }
        else if(A[i]==9 && x>0){
            A[i]=0;
            if(i-1<0){
              y=1;
            }
           B.push_back(A[i]);
        }
        else if(A[i]==0&& (i-1)<0 && x==0){
            A[i]=0;
        }
        else{
           B.push_back(A[i]);
        }
    }
   
    if(y==1){
        B.push_back(1);
    }
    while(B[B.size()-1]==0){
        B.pop_back();
    }
    for(int i=0;i<(B.size()-i-1);i++){
        swap(B[i],B[B.size()-i-1]);
    }
    return B;
}
