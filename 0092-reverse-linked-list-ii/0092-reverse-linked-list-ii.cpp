class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *l = head; ListNode *r = head; ListNode *t1 = NULL ; ListNode *t2 = NULL;
        if(head == NULL)
            return NULL;
        if(left == right)
            return head;
        
        for(int i = 1 ; i < right ; i++){
            if(i < left){
                t1 = l;
                l = l->next;
            }
            
            r = r->next;
            if(r->next != NULL)
                t2 = r->next;
            else
                break;
        }
        
        // cout<<t1->val<<" "<<l->val<<" "<<r->val<<" "<<t2->val;
        ListNode *prev = l;
        ListNode *curr = l->next;
        ListNode *forward = NULL;
        
        if(t2 == r){
            while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            }
        }
        
        else{
            while(curr != t2){
                forward = curr->next;
                curr->next = prev;
                prev = curr;
                curr = forward;
            }
        }
        if (t1 != NULL) {
            t1->next = prev;
        } else {
            head = prev;
        }
        
        l->next = curr;
        
        return head;
    }
};