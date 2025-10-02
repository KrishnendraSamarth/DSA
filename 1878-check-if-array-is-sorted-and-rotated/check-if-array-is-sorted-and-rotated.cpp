class Solution {
public:
    
    void rotate(vector<int>& nums)
    {
        int n = nums.size();
        int temp = nums[0];
        for(int i=0;i<n-1;i++)
        {
            nums[i]=nums[i+1];
        }
        nums[n-1]=temp;
    }
    bool check(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(is_sorted(nums.begin(),nums.end()))
                return true;
            else
                rotate(nums);
        }
        return false;
    }
};