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
    void solve(ListNode* &head, ListNode *curr, ListNode *prev){
        if(curr==NULL){
            head=prev;
            return;
        }
        ListNode *forward=curr->next;
        curr->next=prev;
        solve(head,forward,curr);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode *curr=head;
        ListNode *prev=NULL;
        solve(head,curr,prev);
        return head;
    }
};