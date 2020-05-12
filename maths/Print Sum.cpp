vector<int> Solution::primesum(int A) {
    vector<int> b;
    vector<int> c(2);
    int i,j;
    for(int i=0;i<=A;i++)
    b.push_back(i);
    
    for(int i=2;i<b.size();i++)
    {
        for(unsigned int j=i*2;j<=sqrt(A);j++)
        {
            if(b[i]%j==0)
            b.pop_back();
        }
    }
    b[0]=0;
    b[1]=0;
  for(int j=2;j<=A/2;j++)
   {
     if((b[j]+b[A-j])==A)
       {
           c.push_back(j);
           c.push_back(A-j);
           break;
       }
   }
return c;        
}
