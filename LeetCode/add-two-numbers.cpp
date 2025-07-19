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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int save = 0;
        ListNode* ans;
        while(l1 != nullptr || l2 != nullptr){
            if(l1->val + l2->val > 9){
                save = l1->val + l2->val - 9;
                cout << 0 << " ";
                ans = new ListNode(0, ans);
                ans->val = 0;
                ans = ans->next;
                l1 = l1->next;
                l2 = l2->next;
                continue;
            }else{
                cout << l1->val + l2->val + save << " ";
                ans = new ListNode(l1->val + l2->val + save, ans);
                save = 0;
            }
            ans = ans->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        return ans;
    }
};