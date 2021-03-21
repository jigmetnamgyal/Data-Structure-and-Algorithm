// merge

struct ListNode *head = NULL;
struct ListNode **tail = &head;
struct ListNode **next;

while (l1 != NULL && l2 != NULL)
{
    next = l1->val < l2->val ? &l1 : &l2;

    *tail = *next;
    *next = (*next)->next;
    tail = &(*tail)->next;
}

*tail = l1 != NULL ? l1 : l2;

return head;