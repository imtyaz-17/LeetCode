/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:

        ListNode* findMid(ListNode *head)
        {
            ListNode *slow = head;
            ListNode *fast = head;

            while (fast->next != NULL && fast->next->next != NULL)
            {
                slow = slow->next;
                fast = fast->next->next;
            }

            return slow;
        }
    ListNode* mergeSortedList(ListNode *left, ListNode *right)
    {
        if (left == NULL || right == NULL)
        {
            return (left == NULL) ? right : left;
        }

        ListNode *ans = new ListNode(0);
        ListNode *curr = ans;

        while (left != NULL && right != NULL)
        {
            if (left->val < right->val)
            {
                curr->next = left;
                left = left->next;
            }
            else
            {
                curr->next = right;
                right = right->next;
            }
            curr=curr->next;
        }
        
        if (left != NULL || right != NULL)
        {
            curr->next= (left != NULL) ?left: right;
        }
        
        return ans->next;
    }
    ListNode* sortList(ListNode *head)
    {
        if (head == NULL || head->next == NULL) return head;

        ListNode *mid = findMid(head);
        ListNode *newHead = mid->next;
        mid->next = NULL;

        ListNode *left_Sorted_part = sortList(head);
        ListNode *right_Sorted_part = sortList(newHead);

        return mergeSortedList(left_Sorted_part, right_Sorted_part);
    }
};
//**
// https://youtu.be/qYgGBRAry9s