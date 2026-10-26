class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        int index=-1;
        for(int i=0; i<word.size(); i++){
            if(word[i]==ch){
                st.push(word[i]);
                index = i;
                break;
            }
            st.push(word[i]);
        }
        if(index==-1) return word;
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();

        }
        for(int i=index+1; i<word.size(); i++){
            ans += word[i];
        }
        return ans;
    }
};