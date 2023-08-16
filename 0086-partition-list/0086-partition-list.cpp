class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
         if (head == NULL || head->next == NULL)
        return head;
    
ListNode *dummy1= new ListNode(0);
ListNode  *dummy2= new ListNode(0);

ListNode  *head1= dummy1;
ListNode *head2 = dummy2;
 while(head!=NULL)
{
    if (head->val <x){
        head1->next=head;
        head1=head1->next;
    } else{
        head2->next= head;
        head2=head2->next;
    }
    head= head->next;
}
head1->next= dummy2->next;
head2->next=NULL;
return dummy1->next;
}
};