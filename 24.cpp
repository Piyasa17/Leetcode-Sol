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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        int f=0;
        struct ListNode *p=head;
        struct ListNode *q=head->next;
        struct ListNode *curr;
        curr=q;
        p->next=q->next;
        curr->next=p;
        head=curr;
        struct ListNode *a=head->next;
        struct ListNode *b=a->next;
        struct ListNode *c;
        while(a && b){
            c=b;
            if(b->next){
            a->next=b->next;
            b=a->next;
            c->next=b->next;
            b->next=c;
            }
            a=b->next;
            if(a)
                b=a->next;           
        }
        return head;
    }
};
