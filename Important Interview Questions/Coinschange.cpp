class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(amount+1,coins);
        for(int i = 0; i < coins.size(); i++) 
            dp[0][i] = 0;
        for(int i = 0; i < amount+1; i++)
            dp[i][0] = i % coins[0] == 0 ? i / coins[0] : INT_MAX-1;
        for(int i = 1; i < amount+1; i++)
            for(int j = 1; j < coins.size(); j++)
                if(i >= coins[j]) 
                    dp[i][j] = min(dp[i][j-1], dp[i-coins[j]][j]+1);
                else dp[i][j] = dp[i][j-1];
        return dp[amount][coins.size()-1] == INT_MAX-1 ? -1 : dp[amount][coins.size()-1];
    }
};