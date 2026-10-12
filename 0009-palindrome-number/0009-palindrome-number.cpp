class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int a = x; long long pal = 0;
        while(a){
            int last = a%10;
            pal = pal*10+last;
            a/=10;
        }
        return (x==pal);
        
    }
};