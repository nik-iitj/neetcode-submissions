class Solution {
public:

    int characterReplacement(string s, int k) {

        unordered_map<char, int> mp;
        int n = s.size();
        int ans = 0;

        int i = 0;
        int j = 0;

        int maxF = 0;

        while(j<n){

            mp[s[j]]++;
            maxF = max(maxF, mp[s[j]]);

            while((j-i+1) - maxF > k){
                mp[s[i]]--;
                i++;
            }

            ans = max(ans, j-i+1);
            j++;
            
        }

        return ans;


    }
};
