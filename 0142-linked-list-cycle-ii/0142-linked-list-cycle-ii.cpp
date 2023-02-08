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
        // unordered_set<ListNode*> u_set;
        // ListNode* curr = head;
        // while(curr != NULL){
        //     if(u_set.find(curr) != u_set.end()){
        //         return curr;
        //     }else{
        //         u_set.insert(curr);
        //         curr = curr->next;
        //     }
        // }
        // return NULL;
        
//#2
        if(head == NULL) return NULL;
        
         ListNode *slow = head;
         ListNode *fast = head;
        ListNode *entry = head;
        
        while(fast->next !=NULL && fast->next->next !=NULL){
            slow=slow->next;
            fast= fast->next->next;
            
            if(slow==fast){
                while(entry!=slow){
                    slow=slow->next;
                    entry=entry->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};