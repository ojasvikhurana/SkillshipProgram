/*20. Valid Parentheses
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.*/

bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='['){
                st.push(s[i]);
            }else{
                if(st.empty())
                    return false;
                else if((s[i]==')' and st.top()=='(') or (s[i]=='}' and st.top()=='{') or (s[i]==']' and st.top()=='[')){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
    if(st.empty())
        return true;                                                                                   return false;
}