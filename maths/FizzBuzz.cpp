vector<string> Solution::fizzBuzz(int A) {
    vector<string> x;
    string a="Fizz",b="Buzz";
    for(int i=1;i<=A;i++)
    {
        if(i%3==0)
        {
            x.push_back(a);
            
        }
        else if(i%5==0)
        x.push_back(b);
        else if(i%3==0&&i%5==0)
        x.push_back(a+b);
        else
        x.push_back(to_string(i));
    }
    return x;
}
