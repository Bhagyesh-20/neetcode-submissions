class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;

        for(auto str:strs){
            int size = str.size();
            ans = ans + to_string(size) + "#" + str;
        }
        return ans;
    }   

    vector<string> decode(string s) {
        int pointer1 = 0;
        vector<string> ans;

        while(pointer1<s.size()){
            int pointer = pointer1;

            while(s[pointer]!='#'){
                pointer++;
            }

            int length = stoi(s.substr(pointer1,pointer-pointer1));

            pointer1 = pointer+1;
            ans.push_back(s.substr(pointer1,length));

            pointer1+=length;

        }
        return ans;
    }
};
