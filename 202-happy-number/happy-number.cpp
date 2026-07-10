class Solution {
public:
    int next(int num)
        {
            int sum=0;
            while(num>0)
            {
                int dig=num%10;
                sum+=dig*dig;
                num=num/10;
            }
            return sum;
        }
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        while(true)
        {
            slow = next(slow);
            fast = next(next(fast));

            if(slow==1)
            return true;
            if(slow==fast)
            return false;
        }
        return false;
        
        
    }
};