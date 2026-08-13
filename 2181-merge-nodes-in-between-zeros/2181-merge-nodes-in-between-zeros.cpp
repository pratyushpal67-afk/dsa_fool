class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* ans = head->next;

        while (temp != nullptr) {
            int sum = 0;

            while (temp->val != 0) {
                sum += temp->val;
                temp = temp->next;
            }

            ans->val = sum;

            temp = temp->next;

            if (temp != nullptr)
                ans = ans->next;
        }

        ans->next = nullptr;

        return head->next;
    }
};