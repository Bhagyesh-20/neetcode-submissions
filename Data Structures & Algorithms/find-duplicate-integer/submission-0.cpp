class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> visited;

        for(auto it:nums){
            if(visited.find(it)!=visited.end()){
                return it;
            }
            visited.insert(it);
        }
        return -1;
    }
};
