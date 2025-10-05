/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* cur=head;
        vector<int> v1,v2;
        while(cur!=NULL)
        {
            v1.push_back(cur->val);
            cur=cur->next;
        }
        v2.assign(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());
        if(v1==v2) return true;
        else return false;
    }
};