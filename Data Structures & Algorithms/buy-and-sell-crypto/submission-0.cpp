class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int p = 0;
        for(int i =1;i<prices.size();i++){
            int c = prices[i]-mini;
            mini = min(prices[i],mini);
            p = max(c,p);
        }
        return p;
    }
};
