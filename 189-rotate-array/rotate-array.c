void reverse(int* nums,int start,int stop)
{
    while(start<stop)
    {
        int temp = nums[start];
    nums[start] = nums[stop];
    nums[stop] = temp;
    start++;
    stop--;
    }

        
    
    
}
void rotate(int* nums, int numsSize, int k) {
    k=k%numsSize;
    reverse(nums,0,numsSize-1);
    reverse(nums,0,k-1);
    reverse(nums,k,numsSize-1);
}