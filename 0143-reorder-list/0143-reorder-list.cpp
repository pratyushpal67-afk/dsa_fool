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
        vector<int> nums;

        ListNode* temp = head;

        while(temp != nullptr) {
            nums.push_back(temp->val);
            temp = temp->next;
        }

        vector<int> ans;

        int left = 0;
        int right = nums.size() - 1;

        while(left <= right) {
            if(left == right) {
                ans.push_back(nums[left]);
            } else {
                ans.push_back(nums[left]);
                ans.push_back(nums[right]);
            }

            left++;
            right--;
        }

        temp = head;

        for(int i = 0; i < ans.size(); i++) {
            temp->val = ans[i];
            temp = temp->next;
        }
    }
};