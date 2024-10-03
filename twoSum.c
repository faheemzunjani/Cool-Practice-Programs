//Program to return indices of two numbers in an array of integers such that they add up to a specified integer.(twoSum Problem)
//Patrick Fahy

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int* indices = (int*)malloc(2 * sizeof(int));
    int* map = (int*)malloc(100 * sizeof(int));

    *returnSize = 2;

    for (int i = 0; i < numsSize; i++) {

        int complement = target - nums[i];
        if (complement >= 0 && complement < 100 && map[complement] != 0) {
            
            indices[0] = map[complement] - 1; 
            indices[1] = i;
            free(map);
            return indices;
        }
        map[nums[i]] = i + 1; 
    }

    free(map);
    return NULL; // If theres no solution
}

int main() {

    int numsSize;
    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);

    int* nums = (int*)malloc(numsSize * sizeof(int));
  
    printf("Enter the elements in the array: ");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    printf("Enter the target sum: ");
    scanf("%d", &target);

    int returnSize;
    int* result = twoSum(nums, numsSize, target, &returnSize);
    if (result) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        free(result);
    } else {
        printf("No solution found.\n");
    }
    free(nums);

    return 0;
}
