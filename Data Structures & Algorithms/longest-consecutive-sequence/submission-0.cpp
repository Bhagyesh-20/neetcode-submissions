class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        sort(nums.begin(),nums.end());

        int curr_num    = nums[0];
        int count       = 0;
        int index       = 0;
        int max_count   = 0;

        while(index<nums.size()){
            if(curr_num != nums[index]){
                curr_num = nums[index];
                count = 0;
            }

            while(index<nums.size() && curr_num==nums[index]){
                index++;
            }   

            count++;
            curr_num++;
            max_count = max(max_count,count);

        }

        return max_count;

    }
};
