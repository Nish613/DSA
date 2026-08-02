class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string w="";
        vector<string> words;
        for(int i=0;i<n;i++)
        {
            
            if(s[i]==' ')
            {
                if(!w.empty())
                {
                    words.push_back(w);
                    w="";
                }
                
            }
            else
            w+=s[i];
        }
        if(!w.empty())
        words.push_back(w);
        reverse(words.begin(),words.end());
        string final="";
        for(int i=0;i<words.size();i++)
        {
            
            final+=words[i];
            if(i!=words.size()-1)
            final+=" ";
        }
        return final;
    }
};