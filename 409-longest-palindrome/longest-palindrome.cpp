class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        
        for(int i=0;i<s.size();i++)
        mp[s[i]]++;
        if(mp.size()==1)
        return mp[s[0]];
        int count=0,f=1;
        
        for(auto x:mp)
        {
            if(x.second%2==0)
            count+=x.second;
            else 
            {
                count+=x.second-1;
                f=0;
            }
        }
        if(f==0)
        count++;
        return count;

    }
};