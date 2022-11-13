class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head-> next==NULL) 
            return true;
        //slow and fast pointers to find the middle of linked list
        ListNode* slow=head;
        ListNode* fast= head;
        
        while(fast->next!= NULL && fast ->next->next!=NULL) {
            slow=slow->next;
            fast=fast->next->next;
        }
        //reverse the right half of the linked list
        slow->next=reverseList(slow->next);
        // pointing slow to the first position of the right half
        slow=slow->next;
        //start moving slow and head it will compare right and left component of linked list
        while(slow!=NULL) {
            if(head->val!=slow->val)
                return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
        
    }
    //function to reverse the linked list
    ListNode* reverseList(ListNode* head) {
        ListNode* pre=NULL;
        ListNode* next=NULL;
        while(head!=NULL) {
            next=head->next;
            head->next=pre;
            pre=head;
            head=next;
        }
        return pre;
    }
};
