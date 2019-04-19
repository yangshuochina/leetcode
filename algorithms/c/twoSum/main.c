//
// Created by yangshuo on 2019/4/19.
//

#include "main.h"
#include "stdio.h"

int* twoSum(int* nums, int numsSize, int target);
#define NUM_SIZE    4
#define TARGET      260
int nums[NUM_SIZE] = {2, 7, 11, 15};
int main() {
    int *ret;
    int i;
    for (i=0; i<NUM_SIZE; i++) {
        if (i == NUM_SIZE-1) {
            printf("%d", nums[i]);
        } else {
            printf("%d, ", nums[i]);
        }
    }
    printf("\ntwo number is :");
    ret = twoSum(nums, NUM_SIZE, TARGET);
    if (ret != 0) {
        for (i = 0; i < 2; ++i) {
            if (i == 0) {
                printf("%d, ", ret[i]);
            } else {
                printf("%d", ret[i]);
            }
        }
    } else {
        printf("NOT FOUND!!!");
    }
    return 0;
}
