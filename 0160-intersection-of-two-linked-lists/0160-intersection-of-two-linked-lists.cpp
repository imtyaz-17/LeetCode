/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode(int x) : val(x), next(NULL) {}
 *};
 */
class Solution
{
    public:
        ListNode* getIntersectionNode(ListNode *headA, ListNode *headB)
        {
            if (headA == NULL || headB == NULL)
            {
                return NULL;
            }
            ListNode *curr = headA;
            int n1 = 0, n2 = 0;

            while (curr)
            {
                n1++;
                curr = curr->next;
            }
            curr = headB;
            while (curr)
            {
                n2++;
                curr = curr->next;
            }
            int diff = abs(n1 - n2);

            if (n1 < n2)
            {
                while (diff--)
                {
                    headB = headB->next;
                }
            }
            else
            {
                while (diff--)
                {
                    headA = headA->next;
                }
            }

            while (headA && headB)
            {
                if (headA == headB)
                    return headA;
                headA = headA->next;
                headB = headB->next;
            }

            return NULL;
        }
};