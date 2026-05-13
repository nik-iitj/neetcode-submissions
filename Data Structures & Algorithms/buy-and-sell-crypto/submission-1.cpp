class Solution {
public:
    int fast(vector<int>& v){
        int n = v.size();
        int mx = v[n-1];

        int ans= 0;

        for(int i=n-2; i>=0 ; i--){
            mx = max(mx, v[i]);
            ans = max(ans, mx-v[i]);
        }

        return ans;
    }
    int maxProfit(vector<int>& prices) {
        return fast(prices);
        int n = prices.size();

        vector<int> rightMax(n,0);

        rightMax[n-1] = prices[n-1];

        for(int i = n-2; i>=0 ; i--){
            rightMax[i] = max(rightMax[i+1], prices[i]);
        }

        int ans = 0;

        for(int i = 0; i<n; i++){
            ans = max(ans, rightMax[i]-prices[i]);
        }

        return ans;
        
    }
};
