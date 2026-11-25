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
    ListNode* reverseList(ListNode* head) {
if(head!=NULL){
        ListNode * current=head->next , *trail=head,*pre=head;
        while(current!=NULL){
           // current=current->next->next;
         //  current=current->next;
            //trail=trail->next;
            trail=current;
            current=current->next;
            trail->next=pre;
            pre=trail;
           // trail=current;
        }
        head->next=NULL;

        head=trail;
}
      /*  while(current!=NULL){
            trail=current;
            current=current->next;

        }
        trail->next=head;
        head=trail;
        current=head;
        do{
            trail=current;
            current=current->next;
            
        }while(current!=head);
        trail->next=NULL;*/
        return head;
    }
};
