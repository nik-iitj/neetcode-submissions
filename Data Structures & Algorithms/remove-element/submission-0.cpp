class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n = nums.size();
        int k = n;
        int end = n-1;

        for(int i = n-1; i>=0; i--){
            if(nums[i]==val){
                k--;
                int temp = nums[end];
                nums[end] = nums[i];
                nums[i] = temp;
                end--;
            }
        }

        return k;
    }
};