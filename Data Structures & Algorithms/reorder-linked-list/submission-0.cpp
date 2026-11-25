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
void reverse (ListNode*& head){
ListNode *prev=head,*t=head,*c=head->next;
while(c!=NULL){
t=c;
c=c->next;
t->next=prev;
prev=t;


}
if(head!=NULL){
head->next=NULL;
head=t;
}

}
   void reorderList(ListNode* head) {
      ListNode* first=head ,*secound=head,*temp=head,*head2,*s2,*f2 ;
while(temp!=NULL){
temp=temp->next;
/*if(temp!=NULL){
 
}*/
if(temp!=NULL){
secound=secound->next;
temp=temp->next;

   
}
}
reverse(secound);
head2=secound;
f2=first;
s2=secound;
while(secound!=NULL&&secound->next!=NULL){
   if(first!=head2){
        f2=first->next;
        first->next=secound;
        first=f2;
        //secound=secound->next;
    //}
    if(secound!=NULL){
    s2=secound->next;
    secound->next=f2;
    secound=s2;
    }
    //else{
  //      secound=secound->next;
  //  }

}
    }}
};