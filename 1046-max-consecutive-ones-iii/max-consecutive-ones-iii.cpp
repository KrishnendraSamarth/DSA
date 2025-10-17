class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {     //opti aaproach
        
       int max_len=0,count=0;
       int l=0,r=l;
       while(r<nums.size())
       {
        if(nums[r]==0)
        {
            count++;
           
        }
        if(count>k)
        {
           if(nums[l]==0)
           {
            count--;
           }
           l++;
        }
        max_len=max(r-l+1,max_len);
        r++;
       }
        
        return max_len;
    }
};