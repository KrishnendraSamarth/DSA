class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int cnt =1;
        int i=0,j=i+1;
        while(j<n)
        {
            if(nums[j] == nums[i])
                j++;
            else
            {
                nums[i+1]=nums[j];
                cnt++;
                i++;
                j++;
            }
        }
    return cnt;

        
    }
};