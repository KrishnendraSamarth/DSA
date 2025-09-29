class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     unordered_set<char> st;
     int cnt=0,maxcnt=0;
     int n = s.size();
     int i=0,j=i;
     while(j<n)
     {
        if(st.find(s[j]) == st.end())
        {
            st.insert(s[j]);
            cnt = j-i+1;
            maxcnt=max(cnt,maxcnt);
            j++;
        }
        else
        {
            st.erase(s[i]);
            i++;
        }
        
     }
     return maxcnt;
    }
};