class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();

        int low = 0;
        int high = nums.size()-1;

        while(low < high){
            int mid = (high-low)/2 +low;
            if(nums[high]<nums[mid]){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        return nums[low];

    }
};
