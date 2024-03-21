 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* newHead = reverseList(head->next);
    }
        head->next->next = head;
        head->next = nullptr;
        return newHead;
        if(!head || !head->next) return head;
[
