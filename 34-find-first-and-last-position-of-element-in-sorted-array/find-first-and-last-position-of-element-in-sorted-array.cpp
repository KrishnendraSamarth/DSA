class Solution {
public:
    
    int first(vector<int>& nums, int target)
    {
        int n = nums.size();
        int l=0,h=n-1,mid,ans=-1;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                h=mid-1;
            }
            else if(nums[mid] > target)
                h=mid-1;
            else
                l=mid+1;
        }
        return ans;
    }
    int last(vector<int>& nums, int target)
    {
        int n = nums.size();
        int l=0,h=n-1,mid,ans=-1;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                l=mid+1;
            }
            else if(nums[mid] > target)
                h=mid-1;
            else
                l=mid+1;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int a = first(nums,target);
        int b = last(nums,target);
        return {a,b};
    }
};