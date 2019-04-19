//
// Created by yangshuo on 2019/4/18.
//
#include "stdio.h"

#include "main.h"


struct ListNode node13 = {
        .val = 3,
        .next = NULL
};
struct ListNode node12 = {
        .val = 4,
        .next = NULL//&node13
};
struct ListNode node11 = {
        .val = 2,
        .next = &node12
};

struct ListNode node23 = {
        .val = 4,
        .next = NULL
};
struct ListNode node22 = {
        .val = 6,
        .next = &node23
};
struct ListNode node21 = {
        .val = 5,
        .next = NULL//&node22
};
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);
int main() {
    int i;
    struct ListNode *L1 = &node11;
    struct ListNode *L2 = &node21;
    struct ListNode *ptr = L1;

    for (i=0; i<3 && ptr != NULL; i++, ptr = ptr->next) {
        printf("L1 node%d = %d, ", i, ptr->val);
    }

    printf("\n");
    ptr = L2;
    for (i=0; i<3 && ptr != NULL; i++, ptr = ptr->next) {
        printf("L2 node%d = %d, ", i, ptr->val);
    }
    ptr = addTwoNumbers(L1, L2);

    printf("\n");
    for (i=0; i<3 && ptr != NULL; i++, ptr = ptr->next) {
        printf("ret%d = %d, ", i, ptr->val);
    }
    return 0;
}