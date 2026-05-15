class Solution {
public:
    bool check(vector<int>&curr, vector<int>&target){
        for(int i=0; i<target.size(); i++){
            if(target[i] > curr[i]){
                return false;
            }
        }

        return true;
    }
    string minWindow(string s, string t) {
        vector<int> curr(128, 0);
        vector<int> target(128, 0);

        for(unsigned char i: t){
            target[i]++;
        }   

        int i=0;
        int j=0;

        int n = s.size();
        string ans;
        while(j<n){
            
            unsigned char c = s[j];
            curr[c]++;
            j++;


                // try shrinking the window
            while(i<j && check(curr, target)){
                // cout<< "running for :" <<i <<" "<<j<<endl;
                if(ans.size()==0){
                    ans = s.substr(i, j-i);
                    cout<<ans<<endl;
                } else {
                    // update if curr is min
                    if(j-i < ans.size()){
                        ans = s.substr(i, j-i);
                    }
                }

                unsigned char left = s[i];
                curr[left]--;
                i++;
            }
        }

        // if(check(curr, target) && (j-i) < ans.size()){
        //     return s.substr(i,j-i);
        // }

        return ans;
        
    }
};
