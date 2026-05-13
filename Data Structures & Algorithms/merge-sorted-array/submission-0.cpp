class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums1Pt = m-1;
        int nums2Pt = n-1;

        int end = nums1.size()-1;

        while(nums1Pt>=0 && nums2Pt>=0){
            if(nums1[nums1Pt] > nums2[nums2Pt]){
                nums1[end] = nums1[nums1Pt];
                nums1Pt--;
            } else{
                nums1[end] = nums2[nums2Pt];
                nums2Pt--;
            }
            end--;
        }

        while(nums1Pt>=0){
            nums1[end] = nums1[nums1Pt];
            nums1Pt--;
            end--;
        }

        while(nums2Pt>=0){
            nums1[end] = nums2[nums2Pt];
            nums2Pt--;
            end--;
        }
    }
};