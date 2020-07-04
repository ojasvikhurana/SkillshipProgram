/*1021. Remove Outermost Parentheses
A valid parentheses string is either empty (""), "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation.  For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.
A valid parentheses string S is primitive if it is nonempty, and there does not exist a way to split it into S = A+B, with A and B nonempty valid parentheses strings.
Given a valid parentheses string S, consider its primitive decomposition: S = P_1 + P_2 + ... + P_k, where P_i are primitive valid parentheses strings.
Return S after removing the outermost parentheses of every primitive string in the primitive decomposition of S.
 */



string removeOuterParentheses(string S) {
        int o=1;
        string ans="";
        for(int i=1;i<S.length();i++){
            if(S[i]==')'){
                if(o!=1){
                    ans+=S[i];
                }
                o--;
            }else{
                if(o!=0){
                    ans+=S[i];
                }
                o++;
            }
        }
        return ans;
    }