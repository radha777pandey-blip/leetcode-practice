/*class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        int count=0;
        while(i>=0 && s[i]==' ')
        {
            i--;
        }
    while(i>=0 && s[i]!=' '){
                count++;
                i--;
                 }
    
        return count;
        
    }
}; */
// vector approach
class Solution {
 public:
    int lengthOfLastWord(string s) {
        vector<char>word;
        int size=s.length()-1;
        int count=0;
        while(size>=0 && s[size]==' ')
        {
           size--;
        }
        for(int i=size;i>=0&&s[i]!=' ';i--)
        {
            word.push_back(s[i]);
          count= word.size();
        }
        return count;

        
    }
};