bool check(int x,int y)
{
    string a=to_string(x)+to_string(y);
    string b=to_string(y)+to_string(x);
    return a>b;
}



string Solution::largestNumber(const vector<int> &A) {
    vector<int> b=A;
    int sum=0;
    for(int i=0;i<b.size();i++)
    sum+=b[i];
    if(sum==0)
    return to_string(sum);
    string a="";
    sort(b.begin(),b.end(),check);
    for(int i=0;i<b.size();i++)
    a=a+to_string(b[i]);
    return a;
}
