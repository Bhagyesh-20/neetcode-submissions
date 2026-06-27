class Solution {
public:
    bool checkInclusion(string s1, string s) {
        unordered_map<char,int> maps1;
        unordered_map<char,int> maps2;
        
        for(char c:s1){
            maps1[c]++;
        }
        int window_size = s1.size();
        int left = 0;
        
        for(int right= 0;right<s.size();right++){
            maps2[s[right]]++;

            if(right-left+1>window_size){
                maps2[s[left]]--;
               
                if(maps2[s[left]]==0){
                    maps2.erase(s[left]);
                } 
                left++;
            }

            if(maps1==maps2){
                return true;
            }
        }
        return false;
    }
};
