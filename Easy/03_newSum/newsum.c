#include <stdio.h>

// nums = [2,7,11,15], target = 9
int main(){


    int nums[] = {2,7,11,15};
    int target =9 ;

    
    int numSize = sizeof(nums)/sizeof(nums[0]);

    for(int i=0;i<numSize;i++){
        for(int j = 0;j<numSize;j++){
            if(nums[i]+nums[j] == target){
                printf("[%d , %d]", i , j);

            }
        }
    }

    printf("%d, %d\n" , numSize , target);
    return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//    int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//     // Allocate memory for the result array of size 2
//     int* result = (int*)malloc(2 * sizeof(int));

//     // Iterate through each element to find the pair
//     for (int i = 0; i < numsSize; i++) {
//         for (int j = i + 1; j < numsSize; j++) { // Start j from i+1 to avoid using the same element twice
//             if (nums[i] + nums[j] == target) {
//                 // Assign the indices to the result array
//                 result[0] = i;
//                 result[1] = j;

//                 // Set the return size to 2
//                 *returnSize = 2;

//                 // Return the result array
//                 return result;
//             }
//         }
//     }

//     // If no pair is found, return NULL or handle as needed
//     *returnSize = 0;
//     return NULL;
// }