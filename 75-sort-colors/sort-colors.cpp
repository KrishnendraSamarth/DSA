class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        vector<int> vec;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                vec.push_back(nums[i]);
        }

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                vec.push_back(nums[i]);
        }

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==2)
                vec.push_back(nums[i]);
        }

        nums.assign(vec.begin(),vec.end());
    }
 
};