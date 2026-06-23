class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int size = tokens.size();
        for(int i=0;i<size;i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                st.push(stoi(tokens[i])); 
            }
            else{
                int secondele = st.top(); st.pop();
                int firstele = st.top();  st.pop();
                int res = 0;

                if(tokens[i]=="+"){
                    res =  firstele + secondele;
                    st.push(res);
                }
                else if(tokens[i]=="-"){
                    res =  firstele - secondele;
                    st.push(res);
                }
                else if(tokens[i]=="*"){
                    res =  firstele*secondele;
                    st.push(res);
                }
                else{
                    res = firstele/secondele;
                    st.push(res);
                }

            }
        }
        return st.top();

    }
};
