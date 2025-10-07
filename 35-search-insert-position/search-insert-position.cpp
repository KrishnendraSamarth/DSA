class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0,h=n-1,mid;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(target==nums[mid])
                return mid;
            else if(target>nums[mid])
                l=mid+1;
            else
                h=mid-1;
        }
        if(target<nums[0])
            return 0;
        if(target > nums[n-1])
            return n;
        for(int i=1;i<n;i++)
        {
            if(target<nums[i] && target>nums[i-1] )
             return i;
        }
        return -1;
    }
};