//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = INT_MAX;
        int maxi = 0;

        for(int i: prices){
            mini = min(mini,i);
            maxi = max(i-mini,maxi);
        }

        return maxi;
    }
};
