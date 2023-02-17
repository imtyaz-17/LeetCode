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
    ListNode* reverse(ListNode* head){
        
        //reverse the after midle part of original list
        ListNode* prev = NULL;
        ListNode* tmp;
        while(head != NULL){
            tmp = head->next;
            head->next = prev;
            prev = head;
            head = tmp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow = head, *fast = head;
        
        // find midle of the list 
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(fast != NULL && fast->next ==NULL){ //the length of list is odd
            slow = slow->next;
        }
        
        slow = reverse(slow);
        
        fast = head;
        
        while(slow!=NULL && fast !=NULL){
            
            if(slow->val != fast->val)
                return false;
            slow = slow->next;
            fast = fast->next;
        }
        
        return true;
    }
};

// **
// https://youtu.be/WDnUxZlaBSA