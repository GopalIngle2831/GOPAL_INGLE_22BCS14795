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
    ListNode*deleteMiddle(ListNode*head) {
        int count=0;
        ListNode*curr=head;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        if(count==1)
            head=NULL;
        else{
            curr=head;
            count=count/2;
            cout<<count;
            while(count!=1){
                curr=curr->next;
                count--;
            }
            curr->next=curr->next->next;
        }
        return head;
    }
};