class Solution {
public:
    static bool comp(vector<int>&a, vector<int>&b){
        if(a[0]==b[0]){
            return a[1] <= b[1];
        }
        return a[0] < b[0];
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        vector<vector<int>> v;
        int n = nums.size();

        for(int i=0; i<n; i++){
            v.push_back({nums[i], i});
        }
        int start = 0;
        int end = n-1;
        sort(v.begin(), v.end(), comp);

        while(start<end){
            if(v[start][0] + v[end][0] == target){
                ans.push_back(v[start][1]);
                ans.push_back(v[end][1]);
                
                sort(ans.begin(), ans.end());
                return ans;
            }

            if (v[start][0] + v[end][0] > target){
                end--;
            }
            else {
                start++;
            }
        }

        return ans;
    }
};
