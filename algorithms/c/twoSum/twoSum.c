//
// Created by yangshuo on 2019/4/19.
//
/*
 * Given an array of integers, return indices of the two numbers such that they
 * add up to a specific target. You may assume that each input would have
 * exactly one solution, and you may not use the same element twice.
 * Example:
 *      Given nums = [2, 7, 11, 15], target = 9,
 *      Because nums[0] + nums[1] = 2 + 7 = 9,
 *      return [0, 1].
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target) {
    int *two = 0;
    int find = 0;
    int i, j;

    two = malloc(2*sizeof(int));
    two[0] = 0;
    two[1] = 0;
    for (i = 0; i < numsSize-1; i++) {
        for (j = i+1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                find = 1;
                break;
            }
        }
        if (1 == find) {
            two[0] = i;
            two[1] = j;
            break;
        }
    }
    if (0 == find) {
        free(two);
        two = 0;
    }
    return two;

}
