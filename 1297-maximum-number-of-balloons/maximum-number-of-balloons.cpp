class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        for(int i=0;i<text.size();i++)
        mp[text[i]]++;
        int b=mp['b'],a=mp['a'],l=mp['l'],o=mp['o'],n=mp['n'];
        int count=0;
        
        while(b>0&&a>0&&l>=2&&o>=2&&n>0)
        {
            count++;
            b--;
            a--;
            l-=2;
            o-=2;
            n--;
        }
        
        return count;
        
    }
};