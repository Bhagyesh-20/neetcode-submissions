class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mpp;

        for(auto it:nums){
            mpp[it]++;
        }
        int n = nums.size();
        vector<vector<int>> freq(n+1);

        for(auto it:mpp){
            int number = it.first;
            int frequency = it.second;
            freq[frequency].push_back(number);
        }

        vector<int> ans;

        for (int i = n; i >= 0; i--) {
            if (ans.size() >= k) break; 
            for (int element : freq[i]) {
                ans.push_back(element);
                if (ans.size() == k) break;
            }
        }

    return ans;


    }
};
