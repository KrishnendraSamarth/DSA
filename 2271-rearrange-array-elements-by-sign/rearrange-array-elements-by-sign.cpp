class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg,ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        }
        int p=0,q=0;
        for(int i=0;i<nums.size();i++)
        {
            
            if(i%2 == 0)
            {
                ans[i]=pos[p];
                p++;
            }
            else
            {
                ans[i]=neg[q];
                q++;
            }
        }
        return ans;

    }
};