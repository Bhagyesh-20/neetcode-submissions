class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> freq;
        
        for(char c:t){
            freq[c]++;
        }

        int left        = 0; 
        int start_idx   = -1;
        int min_length  = INT_MAX;
        int count       = 0;

        for(int right=0;right<s.size();right++){
           
            if(freq[s[right]]>0){
                count++;
            }
             freq[s[right]]--;
            while(count == t.size()){
                if(right-left+1<min_length){
                    min_length = right-left+1;
                    start_idx = left;
                }
                freq[s[left]]++;
                if(freq[s[left]]>0){
                    count--;
                }
                left++;
            }
        }
        return (start_idx==-1)?"":s.substr(start_idx,min_length);
    }
};
