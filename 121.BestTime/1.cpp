class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int len = prices.size();
        for(int i = 0; i < len - 1; ++i){
            for(int j = i + 1; j < len; ++j){
                int temp = prices[j] - prices[i];
                if(temp > max)
                    max = temp;
            }
        }
        return max;
        
    }
};
