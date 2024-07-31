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
        ListNode *head=NULL;
        ListNode *temp;
        int carry=0;
        while(l1 != NULL || l2 !=NULL){
            int num1,num2;
            if(l1==NULL)
                num1=0;
            else
                num1=l1->val;
            if(l2==NULL)
                num2=0;
            else
                num2=l2->val;
            int sum= num1+ num2 +carry;
            if(head==NULL){
                head=new ListNode(sum%10);
                temp=head;
                carry=sum/10;
            }
            else{
                temp->next= new ListNode(sum%10);
                temp = temp->next;
                carry=sum/10;
            }
            if(l1 != NULL)
                l1=l1->next;
            if(l2 != NULL)
                l2=l2->next;
        }
        if(carry != 0){
            temp->next=new ListNode(carry);
        }
        return head;
    }
};
