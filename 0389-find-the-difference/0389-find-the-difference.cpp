class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> map;
        for(char ch : s){
            map[ch]++;
        }
        for(char ch : t){
            if(map[ch]==0){
                return ch;   
            }
            map[ch]--;
            
        }
        return 0;

        
    }
};