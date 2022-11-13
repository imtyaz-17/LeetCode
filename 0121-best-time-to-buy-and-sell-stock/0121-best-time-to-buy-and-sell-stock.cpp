class Solution {
public:
    int maxProfit(vector<int>& prices) {
int minn = prices[0];
        int max_profit=0, i;
        
        for(i=0;i<prices.size();i++){
                minn=min(minn,prices[i]);
            int profit = prices[i]-minn;
            max_profit = max(max_profit,profit);
        }
        return max_profit;
    }
};



/**
 * Explanation:
 *https://www.youtube.com/watch?v=34WE6kwq49U
 */