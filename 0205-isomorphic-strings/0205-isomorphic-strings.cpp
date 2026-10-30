/*class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int count=0;
        int size1=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=s[i+1])
            {
                count++;
            }
        }
         for(int j=0;j<t.length();j++)
        {
            if(t[j]!=t[j+1])
            {
                size1++;
            }
        }
        if(count==size1)
        return true;
        else
        return false;
    }
}; */
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>set;
         unordered_map<char,int>set2;
        
        for(int i=0;i<s.length();i++)
        {
            if(set.find(s[i])!=set.end())
            {
               if(set[s[i]]!=t[i])
               return false;
            }
            else
            set[s[i]]=t[i];
        }
         for(int i=0;i<t.length();i++)
        {
            if(set2.find(t[i])!=set2.end())
            {
                if(set2[t[i]]!=s[i])
                return false;
            }
         else
         set2[t[i]]=s[i];
        }
        return true;
        
    }
};