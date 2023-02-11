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
    int nodeSize(ListNode* head){
        int n=0;
        while(head!=NULL){
            n++;
            head= head->next;
        }
        return n;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL) return head;
        
        int n = nodeSize(head);
        int loop = k%n;
        loop = n-loop;
        
        if(loop == n) return head;
        
        int j=0;
        
        ListNode* temp=head;
        ListNode* first_address=head;
        
        while(temp!=NULL){
            j++;
            if(j==loop){
                first_address = temp->next;
                temp->next=NULL;
                break;
            }
            
            temp=temp->next;
        }
        
        temp = first_address;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        temp->next= head;
        
        return first_address;

    }
};

//**
// https://youtu.be/CttdbiOArGg