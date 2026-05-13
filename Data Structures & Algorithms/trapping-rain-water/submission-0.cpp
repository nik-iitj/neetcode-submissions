class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        if(n==0 || n==1){
            return 0;
        }

        int lmax = h[0];
        int rmax = h[n-1];

        int l = 0;
        int r = n-1;

        int ans = 0;

        // min(lmax, rmax)

        while(l<r){

            if(lmax<=rmax){
                ans+=max(0,lmax-h[l]);
                l++;
                lmax = max(lmax,h[l]);
            } else {

                ans+=max(0, rmax-h[r]);
                r--;
                rmax = max(rmax,h[r]);

            }

        }

        return ans;
    }
};
