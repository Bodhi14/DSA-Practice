    int pairSum(ListNode* head) {
        int ans = INT_MIN;
        vector<int> v;
        while(head) {
            v.push_back(head->val);
            head = head->next;
        }
        int i = 0, j = (int)(v.size() - 1);
        while(i<j) {
            ans = max(ans, v[i++] + v[j--]);
        }
        return ans;
    }
};
[
