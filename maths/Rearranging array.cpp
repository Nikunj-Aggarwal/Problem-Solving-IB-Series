void Solution::arrange(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
   
        int N = A.size();
        for(int i = 0; i < N; ++i) {
            A[i] = A[i] + (A[A[i]] * N);
        }

        for(int i = 0; i < N; ++i) {
            A[i] = A[i] / N;
        }
    }