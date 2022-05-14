ListNode *removeNthFromEnd(ListNode *head, int n)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return NULL;
    int i = 0;
    ListNode *curr = head;
    ListNode *count = head;
    int length{0};
    while (count != NULL)
    {
        length++;
        count = count->next;
    }
    int val = length - n;
    while (curr != NULL)
    {
        if (i == val - 1)
            break;
        i++;
        curr = curr->next;
    }
    if (val == 0)
    {
        ListNode *first = head;
        head = head->next;
        delete first;
        return head;
    }
    ListNode *nextNode = curr->next;
    curr->next = nextNode->next;
    delete nextNode;
    return head;
}
}
;