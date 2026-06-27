class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> freq;
        int left = 0;
        int max_length = 0;
        for(int right=0;right<s.size();right++){
                freq[s[right]]++;
            
                while(freq[s[right]]>1){
                    freq[s[left]]--;
                    left++;
                }
            int length = right - left + 1;
            max_length = max(max_length, length);
        }
        return max_length;
    }
};
