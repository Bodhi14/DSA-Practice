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
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return;
        ListNode* pen = head;
        while(pen->next->next) pen = pen->next;
        
        //Linking
        
        pen->next->next = head->next;
        head->next = pen->next;
        
        pen->next = NULL;
        // Recursing for the remaining elements
        reorderList(head->next->next);
    }
};