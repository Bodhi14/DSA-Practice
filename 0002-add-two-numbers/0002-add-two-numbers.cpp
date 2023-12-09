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
    ListNode* reverse(ListNode* head) {
        if(head==nullptr || head->next == nullptr) return head;
        ListNode* newHead = reverse(head->next);
        ListNode* headNext = head->next;
        headNext->next = head;
        head->next = nullptr;
        return newHead;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         if(!l1) {
             if(!l2) {
                 return nullptr;
             }
             else return l2;
         }
         if(!l2) {
             return l1;
         }
         ListNode* head1 = (l1);
         ListNode* head2 = (l2);
         ListNode* dummy = new ListNode(-1);
         ListNode* ans = dummy;
         int carry = 0;
         
         while(head1 && head2) {
             int sum = head1->val + head2->val + carry;
             int value = sum%10;
             carry = sum/10;
             if(dummy->val == -1) {
                 dummy->val = value;
             }
             else {
                 ListNode* newNode = new ListNode(value);
                 dummy->next = newNode;
                 dummy = dummy->next;
             }
             cout<<dummy->val;
             head1 = head1->next;
             head2 = head2->next;
         }
         while(head2) {
             int sum = head2->val + carry;
             int value = sum%10;
             carry = sum/10;
             ListNode* newNode = new ListNode(value);
             dummy->next = newNode;
             dummy = dummy->next;
             head2 = head2->next;
         }
         while(head1) {
             int sum = head1->val + carry;
             int value = sum%10;
             carry = sum/10;
             ListNode* newNode = new ListNode(value);
             dummy->next = newNode;
             dummy = dummy->next;
             head1 = head1->next;
         }
         if(carry) {
             int val = carry%10;
             ListNode* newNode = new ListNode(carry);
             dummy->next = newNode;
             dummy = dummy->next;
         }
         return ans;

    }
};