class Solution {
public:
    int sum_digit(int val){
        int sum = 0;
        while(val){
            int last = val%10;
            sum += last;
            val/=10;
        }
        return sum;

    }
    int minElement(vector<int>& nums) {
        for(int i=0; i<nums.size();i++){
            int place = sum_digit(nums[i]);
            nums[i] = place;
        }
        sort(nums.begin(),nums.end());
        return nums[0];
        
    }
};