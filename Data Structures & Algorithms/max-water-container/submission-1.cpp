class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        int n = heights.size();

        int start = 0;
        int end = n-1;

        while(start<end){
            ans = max(ans, min(heights[start], heights[end]) * (end-start));
            if(heights[start] > heights[end]){
                end--;
            } else {
                start++;
            }
        }

        return ans;
        
    }
};
