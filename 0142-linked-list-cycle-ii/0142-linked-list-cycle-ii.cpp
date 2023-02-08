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
    ListNode *detectCycle(ListNode *head) {
//#1
        unordered_set<ListNode*> u_set;
        ListNode* curr = head;
        while(curr != NULL){
            if(u_set.find(curr) != u_set.end()){
                return curr;
            }else{
                u_set.insert(curr);
                curr = curr->next;
            }
        }
        return NULL;
        
         // ListNode *slow = head;
         // ListNode *fast = head->next;
    }
};