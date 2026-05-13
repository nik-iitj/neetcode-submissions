class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        int curr = 0;
        int j = 0;
        int n = strs.size();
        if(n==1){
            return strs[0];
        }

        while(true){

            char currChar = strs[0][curr];
            int considered = 0;
            for(int i = 1; i<n; i++){
                if(strs[i].size()>curr && strs[i][curr] == currChar){
                    considered++;
                    if (considered == n-1){
                        ans.push_back(currChar);
                    }
                }
                else {
                    return ans;
                }
            }
            curr++;
        }

        return ans;

    }
};