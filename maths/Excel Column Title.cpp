string Solution::convertToTitle(int A) {
    
    string str="";
   int n=A,c=0;
   while(n)
   {
       c=n%26;
       if(c)
       {
           int r=c+'A'-1;
           string s;
           s.push_back(r);
           str.insert(0,s);
           n=n/26;
           
       }
       else
       {
           
       }
   }
    return str;

}
