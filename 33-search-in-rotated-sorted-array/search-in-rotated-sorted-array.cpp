class Solution {
public:
    int search(vector<int>& nums, int target) {
      int n=nums.size();
      int l=0,h=n-1,mid;
      while(l<=h)
      {
        int mid=(l+h)/2;
        if(nums[mid]==target)
            return mid;
        //if left is sorted
        else if(nums[l]<=nums[mid])
        {
            //ele exits in left
            if(nums[l]<= target && target <= nums[mid])
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }

        //if right sorted
        else
        {
            if(nums[mid]<= target && target <= nums[h]) //no exits in right
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
      }
      return -1;
    }
};