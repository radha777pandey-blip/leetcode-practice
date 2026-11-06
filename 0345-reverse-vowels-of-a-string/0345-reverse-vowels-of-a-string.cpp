class Solution {
public:
    string reverseVowels(string s) {

        vector<char> result;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||
               s[i]=='o' || s[i]=='u' || s[i]=='A' ||
               s[i]=='E' || s[i]=='I' || s[i]=='O' ||
               s[i]=='U')
            {
                result.push_back(s[i]);
            }
        }

        int j = result.size()-1;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||
               s[i]=='o' || s[i]=='u' || s[i]=='A' ||
               s[i]=='E' || s[i]=='I' || s[i]=='O' ||
               s[i]=='U')
            {
                s[i] = result[j];
                j--;
            }
        }

        return s;
    }
};