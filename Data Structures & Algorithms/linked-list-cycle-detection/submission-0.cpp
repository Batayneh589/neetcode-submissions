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
    bool hasCycle(ListNode* head) {
        ListNode*one=head,*two=head;
        int temp =-1;
        while(one!=NULL){
            one=one->next;
            temp++;
            if(temp==1){
                two=two->next;
                temp=-1;
            }
            if(two==one){
                return true;
            }
        }
    return false;
    }
};
