// map<int,int> m;
    vector<int> ans;
vector<int> Solution::repeatedNumber(const vector<int> &A) {
          int a[A.size()+1]={0},c,b;
          for(int i=0;i<A.size();i++){
              a[A[i]]+=1;
          }
          for(int i=1;i<=A.size();i++){
              if(a[i]>=2){
                 b=i; 
              }
              if(a[i]==0){
                  c=i;
              }
          }
          ans.push_back(b);
          ans.push_back(c);
          return ans;
            }                                           //     m[A[i]]++;
                                                //     }
                                                // map<int,int>::iterator itr;
                                                // itr=m.begin();
                                                // for(int i=1;i<=n,itr!=m.end();i++,itr++){
                                                
                                                //     if(m[i]==0){
                                                //         b=i;
                                                //     }
                                                //     if(itr->second==2){
                                                //         a=itr->first;
                                                //     }
                                                // }
                                                // ans.push_back(a);
                                                // ans.push_back(b);
                                                // return ans;
}
