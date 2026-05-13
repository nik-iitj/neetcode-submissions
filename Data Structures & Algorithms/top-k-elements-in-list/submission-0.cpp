class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>>freq(n+1);

        map<int, int>mp;

        for(auto i: nums){
            mp[i]++;
        }

        for(auto i: mp){
            freq[i.second].push_back(i.first);
        }

        vector<int>ans;

        for(int i=n; i>=0; i--){
            vector<int>temp = freq[i];
            for(auto j: temp){
                if(k==0)
                    break;
                ans.push_back(j);
                k--;
            }
        }

        return ans;
    }
};
