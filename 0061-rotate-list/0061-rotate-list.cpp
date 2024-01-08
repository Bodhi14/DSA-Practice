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
private:
    int SizeofLL(ListNode* head) {
        
        auto curr = head;
        int ans = 0;
        while(curr) {
            curr = curr->next;
            ++ans;
        }
        return ans;
    }
    ListNode* solve(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
        ListNode* lhead = solve(head, k-1);
        ListNode* prev = nullptr, *last = lhead;
        while(last->next) {
            prev = last;
            last = last->next;
        }
        last->next = lhead;
        prev->next = nullptr;
        return last;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int size = SizeofLL(head);
        if(!size) return head; //to handle division by zero error
        k = k%size;
        
        return solve(head, k);
    }
};