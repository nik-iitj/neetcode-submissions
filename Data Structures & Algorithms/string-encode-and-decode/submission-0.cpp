class Solution {
public:
    // num#word#num#word
    string encode(vector<string>& strs) {
        string ans = "";

        for(auto i: strs){
            ans+=to_string(i.size()) + "#" + i + "#";
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        int n = s.size()-1;

        while(i<n){
            // get the length

            string num = "";
            while(i<n && isdigit(s[i])){
                num+=s[i];
                i++;
            }

            i++; // to skip hashtag
            int len = stoi(num);
            string temp = "";
            while(i<n && len>0){
                temp.push_back(s[i]);
                i++;
                len--;
            }

            ans.push_back(temp);
            i++; // to skip hashtag
        }

        return ans;
    }
};
