class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n       = piles.size();
        int low     = 1;
        int high = *max_element(piles.begin(), piles.end());        
        int ans = high;

        while(low<=high){
            int mid = (high-low)/2 + low;

            if(canEat(piles,mid,h)){
                ans     = mid;
                high    = mid-1;
            }
            else{
                low     = mid+1;
            }
        }
        return ans;
    }

    bool canEat(vector<int>& piles,int speed,int h){
        long long hoursTaken = 0;

        for(int pile:piles){
            hoursTaken = hoursTaken + (pile+speed-1)/speed;
        }
        return hoursTaken<=h; 
    }
};
