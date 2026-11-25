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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1==NULL&&list2==NULL){
            return list1;
        }
        if(list1==NULL){
            return list2;
        }
        else if(list2==NULL){
            return list1;
        }
        ListNode *returnedlist =new ListNode;
    ListNode * cur1=list1,*cur2=list2,*head=NULL,*cur3=NULL,*prev=NULL;
        while(cur1!=NULL||cur2!=NULL){

             if(cur1!=NULL&&cur2==NULL){
               
                cur3=new ListNode;
                cur3->val=cur1->val;
                cur1=cur1->next;
            }
           else if(cur1==NULL&&cur2!=NULL){
                cur3=new ListNode;
                cur3->val=cur2->val;
                cur2=cur2->next;
            }
          else  if(cur1->val<=cur2->val){
                cur3=new ListNode;
                cur3->val=cur1->val;
                cur1=cur1->next;
                
            }
              else if(cur1->val>cur2->val){
                cur3=new ListNode;
                cur3->val=cur2->val;
                cur2=cur2->next;
            }
            cur3->next=NULL;
            if(head==NULL){
                head=cur3;
            }
             if(prev!=NULL){
                    prev->next=cur3;
                }
            prev=cur3;
            cur3=NULL;
              
        }
        return head;
    
    }
};
