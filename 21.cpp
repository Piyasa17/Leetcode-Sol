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
        int c1=0, c2=0;
        struct ListNode *r=list1;
        struct ListNode *p=list2;
        while(r!=NULL)
        {
            c1++;
            r=r->next;
        }
        while(p!=NULL)
        {
            c2++;
            p=p->next;
        }
        if(c1==0 && c2==0)
            return NULL;
        if(c1==0 && c2!=0)
            return list2;
        if(c1!=0 && c2==0)
            return list1;
        int ri=c1+c2;
        int arr[ri];
        struct ListNode *a=list1;
        struct ListNode *b=list2;
        int i=0;
        while(a!=NULL && b!=NULL)
        {
            if(a->val<=b->val){
                arr[i]=a->val;
                a=a->next;
            }
            else
            {
                arr[i]=b->val;
                b=b->next;
            }
            i++;
        }
        while(a!=NULL)
        {
            arr[i]=a->val;
            a=a->next;
            i++;
        }
        while(b!=NULL)
        {
            arr[i]=b->val;
            b=b->next;
            i++;
        }
        struct ListNode *rp=list1;
        while(rp->next!=NULL)
        {
            rp=rp->next;
        }
        rp->next=list2;
        struct ListNode *rpi=list1;
        int j=0;
        while(rpi!=NULL)
        {
            rpi->val=arr[j];
            rpi=rpi->next;
            j++;
        }
        return list1;
    }
};
