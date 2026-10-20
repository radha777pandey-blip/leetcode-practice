class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<char,int>ag;
        
        for(int i=0;i<s.length();i++)
        {
                ag[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
                ag[t[i]]--;
                if(ag[t[i]]<0)
                 return false;
        }
      
       return true;

    }
};