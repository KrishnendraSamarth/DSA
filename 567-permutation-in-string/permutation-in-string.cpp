class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       sort(s1.begin(),s1.end());
       int i=0, j=s1.size()-1;
       while(j<s2.size())
       {
        string temp;
        for(int k=i;k<=j;k++)
        {
            temp+=s2[k];
        }
        sort(temp.begin(),temp.end());
        if(s1==temp)
            return true;
        else
       {
        i++;
        j++;
       }
       } 
       return false;
    }
};