class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0)) return false;
        int half = 0;
        while(x>half){
            int last = x%10;
            half = half*10+last;
            x/=10;
        }
        return x==half || x==half/10;
        
    }
};