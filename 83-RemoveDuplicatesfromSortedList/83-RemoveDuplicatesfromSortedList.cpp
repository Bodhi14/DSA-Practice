            if(s.find(curr->val)!=s.end()) {
                prev->next = curr->next;
                ListNode* todel = curr;
                curr = curr->next;
                delete(todel);
                continue;
            }
            else s.insert(curr->val);
            prev = curr;
            curr=curr->next;
[
