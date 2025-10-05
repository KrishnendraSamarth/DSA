/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       unordered_set<ListNode*> st;
       ListNode* cur = headA;
       while(cur!=NULL){
        st.insert(cur);
        cur=cur->next;
       } 
        cur = headB;
        while(cur!=NULL)
        {
            if(st.find(cur) != st.end())
                break;
            cur=cur->next;
        }
        return cur;
    }
};