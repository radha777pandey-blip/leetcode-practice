class Solution {
public:
    int firstUniqChar(string s) {
  for(int i=0;i<s.length();i++)
  {
    bool unique=true;
    for(int j=0;j<s.length();j++)// why j=0  because you might miss a duplicate that occurs before the current character.
    {
        if(i!=j&&s[i]==s[j]) // i!j because position must be unique s[1] and s[1] when i=j=1 points to same position does not mean they are duplicate we are comparing same ellement by index 
        {
            unique=false;
            break;
        }
    }
    if(unique)
    {
        return i;
    }
    
  }

return -1;
    
    }
};