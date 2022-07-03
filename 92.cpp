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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> aux;
        struct ListNode *p=head;
        int i=1;
        while(p){
            if(i>=left && i<=right){
                aux.push_back(p->val);
            }
            p=p->next;
            i++;
        }
        int j=0,x=1;;
        reverse(aux.begin(),aux.end());
        struct ListNode *q=head;
        while(q){
            if(x>=left && x<=right){
                q->val=aux[j];
                j++;
            }
            q=q->next;
            x++;
        }
        return head;
    }
};
