class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;

        for(auto itr:nums){
            if(s.find(itr)!=s.end()){
                return true;
            }
            s.insert(itr);
        }
            return false;
    }
};