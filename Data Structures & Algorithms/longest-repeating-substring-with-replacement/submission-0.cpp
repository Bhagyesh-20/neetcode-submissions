class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxF = 0;
        int count = 0;
        int left = 0;
        unordered_map<char,int> freq;

        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            maxF  = max(maxF,freq[s[i]]);

            while(i-left+1 - maxF >k){
                freq[s[left]]--;
                left++;
            }

            count = max(i-left+1,count);
        }
        return count;

    }
};
