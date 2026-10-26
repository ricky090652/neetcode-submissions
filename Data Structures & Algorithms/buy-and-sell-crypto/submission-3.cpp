class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int mini = 0;
        if(prices.size() <= 1){
            return 0;
        }
        if(prices[0] < prices[1]){
            mini = prices[0];
            maxi = prices[1] - prices[0];
        }
        else{
            mini = prices[1];
        }

        for(int i = 2; i < prices.size(); i++){
            if(mini < prices[i]){
                if((prices[i] - mini) > maxi){
                    maxi = prices[i] - mini;
                }
                //mini = min(prices[i], mini);
            }
            else{
                mini = min(prices[i], mini);
            }
        }
        return maxi;
    }
};
