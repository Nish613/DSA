class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(),maxp=INT_MIN,sum=0;
        int i=0,j=1;
        while(j<n)
        {
            sum=prices[j]-prices[i];
            maxp = max(maxp,sum);
            if(prices[j]<prices[i])
            i=j;
            j++;
        }
        if(maxp>0)
        return maxp;
        else
        return 0;
    }
};