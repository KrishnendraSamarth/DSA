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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur = head;
        int cnt = 0;
        while(cur != NULL)
        {
            cnt++;
            cur=cur->next;
        }
        int delet = cnt - n + 1; ; // points to one node previous to deletion node
        cur = head;
        ListNode* prev = NULL;
        if(cur->next == NULL) 
            return NULL;
        //edge case
        if(delet == 1)
        {
            prev = cur;
            cur=cur->next;
            delete prev;
            return cur;
        }
        while(cur!=NULL)
        {
            delet--; 
            if(delet == 0)
             {
                if(prev!=NULL)
                {
                    prev->next = cur->next;
                    delete cur;
                }
                break;
             }
             prev = cur;
            cur=cur->next;
               
        }
       return head; 

    }
};