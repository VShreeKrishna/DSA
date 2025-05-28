class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>>mp;
        for(int i=0; i<strs.size(); i++){
            string key = strs[i];
            sort(key.begin(),key.end());
            mp[key].push_back(strs[i]);
        }
        for(auto j: mp){
            result.push_back(j.second);
        }
        return result;
    }
};