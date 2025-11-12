class Solution {
public:
    int numsSub(vector<int>& nums, int goal)
    {
        int cnt=0;
        int sum=0;
        int l=0,r=l;
        int n=nums.size();
        if(goal<0) return 0;
        while(r<n)
        {
            sum+=nums[r];
            while(sum>goal)
            {
                sum-=nums[l];   // this logic is is sum<= goal we add the ele and subarr associated 
                                  //to the cnt else we shrink window
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;

    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
    
       return numsSub(nums,goal)-numsSub(nums,goal-1);
    }
};