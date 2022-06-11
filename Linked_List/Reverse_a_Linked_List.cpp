class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pre=NULL,*curr=head,*pos=NULL;
        while(curr)
        {
            pos=curr->next;
            curr->next=pre;
            pre=curr;
            curr=pos;
        }
        return pre;
    }
};
