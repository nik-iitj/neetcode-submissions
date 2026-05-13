class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;

        for(auto i: strs){
            string key = i;
            sort(key.begin(), key.end());
            if(mp.find(key) ==mp.end()){
                vector<string>temp;
                mp[key] = temp;
            }
            // cout<<i<<endl;
            mp[key].push_back(i);
            // cout<<mp[key].size()<<endl;
        }

        vector<vector<string>> ans;

        for(auto i: mp){
            vector<string>temp;
            for(auto j: i.second){
                temp.push_back(j);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
