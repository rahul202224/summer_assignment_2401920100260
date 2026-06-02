class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int i=0;
        
            for(int j=i+1;j<n;j++)
            {
                profit=max(profit,prices[j]-prices[i]);
                i++;
            }
        
        return profit;
        
    }
};
