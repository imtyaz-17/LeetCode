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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
//#1 - Single pointer approach
        ListNode* temp = head;
        int length=0;
        for(;temp;length++)
            temp=temp->next;
        
        n=length-n;
        temp = head;
        if(n==0 || n==length) return head->next;
        
        for(int i=0;i<n-1;i++)
            temp = temp->next;
        
        if(temp->next)
            temp->next = temp->next->next;
        
        return head;
    }
};