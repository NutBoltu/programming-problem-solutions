class Solution {
public:
    int rob(vector<int>& nums) {
        
        int a=0,b=0;
        for(int i=0;i<nums.size();i++)
        {
            int t=max(a,b+nums[i]);b=a;a=t;
        }
        return a;
        
    }
};