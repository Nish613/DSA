int removeDuplicates(int* nums, int numsSize) {
    for(int i=0;i<numsSize-2;i++)
    {
        if(nums[i]==nums[i+2])
        {
            for(int j=i+2;j<numsSize-1;j++)
            {


                nums[j] = nums[j+1];

            }
            i--;
        numsSize--;
        }
        
    }
    return numsSize;
}