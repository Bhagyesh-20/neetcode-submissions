class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nse(n,n);
        vector<int> pse(n,-1);
        int maxArea = 0;
        nse = nsearray(heights,nse);
        pse = psearray(heights,pse);
        
        for(int i=0;i<n;i++){
            int width = nse[i] - pse[i]-1;
            maxArea = max(maxArea, width * heights[i]);
        }

        return maxArea;
    }

    vector<int> nsearray(vector<int>& heights,vector<int>& nse){
        stack<int> st;
        int n = heights.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }

            if(!st.empty()){
                nse[i] = st.top();
            }
            st.push(i);
        }

        return nse;
    }
    vector<int> psearray(vector<int>& heights,vector<int>& pse){
        stack<int> st;
        int n = heights.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }

            if(!st.empty()){
                pse[i] = st.top();
            }
            st.push(i);
        }

        return pse;
    }
};
