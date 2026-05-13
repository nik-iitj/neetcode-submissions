class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> target(26, 0);
        vector<int> curr(26, 0);

        int windowLen = s1.size();

        for(int i=0; i<windowLen; i++){
            target[s1[i]-'a']++;
        }

        int n = s2.size();
        int j = 0;
        int i = 0;
        while(j<n){
            while(j-i+1 <= windowLen){
                curr[s2[j]-'a']++;
                j++;
            }
            // for(int x = 0; x< target.size(); x++){
            //     cout<<"target :" << target[x] <<" curr :" << curr[x]<<endl;
            // }

            if(target==curr){
                return true;
            }

            curr[s2[i]-'a']--;
            i++;
            curr[s2[j]-'a']++;
            j++;
        }

        if(target == curr){
            return true;
        }

        return false;
    }
};
