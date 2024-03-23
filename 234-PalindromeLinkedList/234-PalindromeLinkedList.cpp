        while(head) {
            str1 += head->val + '0';
            head = head->next;
        }
        ListNode* newHead = reverseList(temp);
        while(newHead) {
            str2 += newHead->val + '0';
            newHead = newHead->next;
        }
        return str1 == str2; 
    }
};
[
