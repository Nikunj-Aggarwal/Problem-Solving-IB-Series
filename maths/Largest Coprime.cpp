int Solution::cpFact(int A, int B) {
   
   while(__gcd(A,B)!=1){
        
        
       A=A/(__gcd(A,B));//we are dividing by gcd to remove common factors of A and B
        }
    
    
    return A;
}
