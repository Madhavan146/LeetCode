/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int n=numsSize;
    int *a=malloc(100*sizeof(int));
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                a[0]=i;
                a[1]=j;
            }
        }
    }
    *returnSize=2;
   return a; 
}