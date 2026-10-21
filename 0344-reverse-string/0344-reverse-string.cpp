class Solution {
public:
    void reverseString(vector<char>& s) {
       int i=0;
       int last=s.size()-1;
       while(i<last)
       {
        swap(s[i],s[last]);
        i++;
        last--;
       }
    }
};