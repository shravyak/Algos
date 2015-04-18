/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        if(!head) return head;
        ListNode *p1, *p2;
        int count = 0;
        p1 = p2 = head;
        if(!p2->next ){
            if(n) {head = NULL; return head;}
        }
        while(count < n){
        p2 = p2->next;
        count ++;
        }
        
        if(!p2){
            head = head->next; return head;
        }
        
        while(p2->next != NULL){
            p1 = p1->next;
            p2 = p2->next;
        }
        //p1->val = p1->next->val;
        p1->next = p1->next->next;
        return head;
    }
};
