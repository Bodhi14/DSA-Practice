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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        bool onList1 = true;

        ListNode* ans;
        if(!list1) {
            if(!list2) return NULL;
            else return list2;
        }
        if(!list2 && list1) {
            return list1;
        }
        if((list1->val)<=(list2->val)) {
            ans = list1;
        }
        else {
            onList1 = false;
            ans = list2;
        }

        ListNode* head = ans;


        

        while(list1 && list2) {
            if(onList1) {
                ListNode* forward = list1->next;
                if(forward==nullptr) {
                    ans->next = list2;
                    ans = ans->next;
                    return head;
                }
                if((forward->val)<(list2->val)) {
                    ans->next = forward;
                    ans = ans->next;
                }
                else {
                    onList1 = false;
                    ans->next = list2;
                    ans = ans->next;
                }
                list1 = forward;
            }
            else {
                ListNode* forward = list2->next;
                if(forward==nullptr) {
                    ans->next = list1;
                    ans = ans->next;
                    return head;
                }
                if((forward->val)<(list1->val)) {
                    ans->next = forward;
                    ans = ans->next;
                }
                else {
                    onList1 = true;
                    ans->next = list1;
                    ans = ans->next;
                }
                list2 = forward;
            }
        }
        // while(list1) {
        //     ans->next = list1;
        //     ans = ans->next;
        //     list1 = list1->next;
        // }
        // while(list2) {
        //     ans->next = list2;
        //     ans = ans->next;
        //     list2 = list2->next;
        // }

        return head;

    }
};