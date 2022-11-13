
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode *slow=head;
          ListNode *fast=head;
          ListNode *entry=head;
        
        //to find the collision point where fast == slow
        while(fast->next && fast->next->next) {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) {
                while(slow!= entry){
                slow=slow->next;
                entry=entry->next;
                }
                return entry;
            }
        }
        return NULL;
        
        
    }
};
