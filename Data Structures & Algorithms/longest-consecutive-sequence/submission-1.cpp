class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==0) return 0;
        unordered_set<int> st(nums.begin(), nums.end());

        int ans = 1;

        for(auto i: nums){
            if(st.find(i-1) == st.end()){
                int currAns = 0;
                int val = i;
                while(st.find(val) != st.end()){
                    currAns++;
                    val++;
                }

                ans = max(ans, currAns);
            }
        }

        return ans;

    }
};
