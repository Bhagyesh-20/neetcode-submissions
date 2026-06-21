class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mpp;
        vector<vector<string>> ans;
        for(auto str:strs){
            string key = str;
            sort(key.begin(),key.end());
                mpp[key].push_back(str);
        }


        for(auto vecstr:mpp){
            ans.push_back(vecstr.second);
        }

        return ans;

    }
};
