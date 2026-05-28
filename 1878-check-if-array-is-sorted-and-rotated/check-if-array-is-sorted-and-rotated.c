bool check(int* nums, int numsSize) {
    int n = numsSize,count=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]>nums[(i+1)%n])
        count++;
    }
    return count<=1;
}