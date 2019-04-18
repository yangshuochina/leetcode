/**********************************************************************************
*
* You are given two linked lists representing two non-negative numbers.
* The digits are stored in reverse order and each of their nodes contain a single digit.
* Add the two numbers and return it as a linked list.
*
* Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
* Output: 7 -> 0 -> 8
*
**********************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include "stdlib.h"
#include "main.h"
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *ret, *node;
    struct ListNode *p = 0;
    int carry = 0;
    int i;

    ret = 0;
    i = 0;
    while (l1 || l2) {
        node = malloc(sizeof(struct ListNode));
        node->next = 0;
        if (0 == i) {
            ret = node;
            p = node;
        } else {
            p->next = node;
            p = p->next;
        }


        node->val = ((l1? l1->val:0) + (l2? l2->val:0) + carry) % 10;
        carry = ((l1? l1->val:0) + (l2? l2->val:0) + carry) / 10;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
        i++;
    }

    if (carry) {
        node = malloc(sizeof(struct ListNode));
        node->next = 0;
        node->val = carry;
        p->next = node;
    }

    return ret;
}
