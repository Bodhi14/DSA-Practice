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
    ListNode* partition(ListNode* head, int x) {
         if(!head) return nullptr;
         vector<int> partition1, partition2;
         ListNode* curr = head;
         while(curr) {
            if((curr->val)<x) partition1.push_back(curr->val);
            else partition2.push_back(curr->val);
            curr = curr->next;
        }
        
        ListNode* ans = new ListNode(-300);
        ListNode* res = ans;
        for(int y:partition1) {
          
            if(ans->val==-300) {
                ans->val = y;
                continue;
            }
            else {
                ListNode* newNode = new ListNode(y);
                ans->next = newNode;
                ans = ans->next;
            }
            
        }
        for(int y:partition2) {
           
            if(ans->val==-300) {
                ans->val = y;
                continue;
            }
            else {
                ListNode* newNode = new ListNode(y);
                ans->next = newNode;
                ans = ans->next;
            }   
        }
        return res;
    }
    
};