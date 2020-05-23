int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int x, y, count=0;
    if(A.size()<=1||B.size()<=1||A.size()!=B.size())
    return 0;
    int n=A.size();
    int i=1;
    for(i=1;i<A.size();i++){
        count+=max(abs(A[i]-A[i-1]),abs(B[i]-B[i-1]));
           }
    // while(i<n){
    //     int x1=0,y1=0;
    //     x=A[i-1];
    //     y=B[i-1];
    //     x1=A[i];
    //     y1=B[i+1];
    //     int dx=abs(x1-x);
    //     int dy=abs(y1-x);
        // if(abs(dx)==abs(dy)){
        //     count+=abs(dx);
        //     cout<<count;
        // }
        // else if(abs(dx)<abs(dy)){
        //     count+=abs(dy);
        //     cout<<count;
        // }
        // else{
        //     count+=abs(dx);
        //     cout<<count;
        // }
    //     cout<<max(dx,dy);
    //     count+=max(dx,dy);
        
    //     i++;
    // }
    return count;
    
}
