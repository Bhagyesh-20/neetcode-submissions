class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,double>> cars(n);

        for(int i=0;i<n;i++){
            cars[i] = {position[i],(double)(target-position[i])/speed[i]};
        }
        
        sort(cars.rbegin(),cars.rend());

        stack<double> st;

        for(int i = 0;i<n;i++){
            double currtime =  cars[i].second;

            if(!st.empty() && st.top()>=currtime){
                continue;
            }


            st.push(currtime);
        }

        return st.size();

    }
};
