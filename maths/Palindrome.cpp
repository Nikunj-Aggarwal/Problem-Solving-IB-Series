int Solution::isPalindrome(int A) {
    int rev=0;
    for(int i=A;i!=0;i=i/10)
    {
        rev=rev*10+i%10;
    }
    if(rev==A)
    return true;
    else 
    return false;
}
