/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    static struct ListNode toRet[100];
    struct ListNode* l1Cursor = l1;
    struct ListNode* l2Cursor = l2;
    //looping the linked lists.
    int count = 0;
    int carry = 0;
    while( l1Cursor != NULL || l2Cursor !=NULL )
    {
        int l1v = 0;
        int l2v = 0;
        int sum = 0;
        //while looping add each digit, and if it is over 10 then make carry to next digit
        //if size of list is different only calc with carry from proceeded node.
        if( l1Cursor == NULL && l2Cursor != NULL)
        {
            l1v = 0;
            l2v = l2Cursor->val;
        }
        else if(l2Cursor == NULL && l1Cursor != NULL )
        {
            l1v = l1Cursor->val;
            l2v = 0;
        }
        else
        {
            //while both nodes has
            l1v = l1Cursor->val;
            l2v = l2Cursor->val;
        }
        sum = l1v + l2v + carry;
        // printf("%d\n", count);
        carry = sum / 10;

        if(count < 100)
        {
            toRet[count].next = &toRet[count+1];
            toRet[count++].val = sum % 10;
        }
        if(l1Cursor != NULL)
            l1Cursor = l1Cursor->next;
        if(l2Cursor != NULL)
            l2Cursor = l2Cursor->next;
    }
    if(carry > 0)
    {
        toRet[count].val = carry;
        toRet[count].next = NULL;
    }
    else
    {
        toRet[count-1].next = NULL;
    }
    return toRet;
}
