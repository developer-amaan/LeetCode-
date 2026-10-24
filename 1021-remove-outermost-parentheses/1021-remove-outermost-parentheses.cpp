class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int depth = 0;
        for(char ch : s){
            if(ch=='('){
                if(depth>0){
                    ans += "(";
                }
                depth++;
            }
            else{
                depth--;
                if(depth>0){
                    ans += ")";
                }
                
                
            }
        }
        return ans;
        
    }
};