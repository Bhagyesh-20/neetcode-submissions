class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int left = 0;
        int right = numbers.size() - 1;
        bool found = false;

        while(left < right && !found){
            int curr_target = numbers[left] + numbers[right];

            if(curr_target == target){
                left++;
                right++;
                res.push_back(left);
                res.push_back(right);
                found = true;
                break;
            }

            else if(curr_target > target){
                right--;
            }

            else{
                left++;
            }
        }
        return res;
    }
};
