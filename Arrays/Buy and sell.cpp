class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int i=0; i<prices.size(); i++){
            mini = min(mini, prices[i]);
            maxi = max(maxi, prices[i]- mini);
        }

        if(maxi!=0) return maxi;
        else return 0;
    }
};