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
    ListNode* sortList(ListNode* head) {
        vector<int> vec;
        ListNode* cur = head;
        while(cur!=NULL)
        {
            vec.push_back(cur->val);
            cur=cur->next;
        }
        sort(vec.begin(),vec.end());
        cur = head;
        for(int i=0;i<vec.size();i++)
        {
            cur->val = vec[i];
            cur=cur->next;
        }
        return head;
    }
};