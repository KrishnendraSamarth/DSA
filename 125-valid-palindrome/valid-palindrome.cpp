class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                s1+=tolower(s[i]);
            }
        }
        int l=0,r=s1.size()-1;
        while(l<r)
        {
            if(s1[l] != s1[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};