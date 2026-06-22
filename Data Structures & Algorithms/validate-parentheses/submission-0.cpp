class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> co = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char c:s){
            if(co.count(c)){
                if(!st.empty() && st.top() == co[c]){
                    st.pop();
                } else{
                    return false;
                }
            }else{
                st.push(c);
            }
        }
        return st.empty();
    }
};
