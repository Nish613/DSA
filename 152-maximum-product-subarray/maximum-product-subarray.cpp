class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=  nums.size();
        int left=0,right=n-1;
        int p1=1,p2=1,maxi=INT_MIN,ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(p1==0)
            p1=1;
            if(p2==0)
            p2=1;
            p1*=nums[i];
            p2*=nums[n-i-1];
            maxi = max(p1,p2);
            ans = max(maxi,ans);
        }
        return ans;
    }
};