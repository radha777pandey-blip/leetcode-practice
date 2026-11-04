class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int>answer1;  // as char must be use but stack automatically convert char to int so it will work as well in int also
          stack<int>answer2;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='#')
            answer1.push(s[i]);
            else if(!answer1.empty())
            answer1.pop(); // before poping from stack always checkfor if stack is empty or not // runtime error occures when solve without
        }
         for(int i=0;i<t.length();i++)
        {
            if(t[i]!='#')
            answer2.push(t[i]);
            else if(!answer2.empty())
            answer2.pop();
        }
    if(answer1==answer2)
     return true;
else
return false;
        
    }
};