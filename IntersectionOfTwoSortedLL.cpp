/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)
            return NULL;
        ListNode *a=headA;
        ListNode *b=headB;
        while(a!=b){
            //if 'a' is null we shift it to the other ll that is head B else to a->next
            a=a==NULL? headB : a->next;
            //same with b
            b=b==NULL? headA : b->next;
        }
        return a;
    }
};
