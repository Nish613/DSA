class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> r;
        unordered_map<char, int> m;
        
        for(int i=0;i<ransomNote.size();i++)
        r[ransomNote[i]]++;
        for(int i=0;i<magazine.size();i++)
        m[magazine[i]]++;

        for(int i=0;i<ransomNote.size();i++)
        {
            if(r[ransomNote[i]]>m[ransomNote[i]])
            return false;
        }
        return true;
    }
};