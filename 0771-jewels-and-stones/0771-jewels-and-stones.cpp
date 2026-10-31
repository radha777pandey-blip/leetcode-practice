//brute-force approach
/*class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       int count=0;
       for(int i=0;i<stones.length();i++)
       {
        for(int j=0;j<jewels.length();j++)
        {
            if(stones[i]==jewels[j])
            {
                 count++;
                 break;
            }
        }
       }
       return count;
    }
}; */
// hash table approach
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> fre;
        int count = 0;

        for(int i = 0; i < jewels.length(); i++)
        {
            fre[jewels[i]] = 1;
        }

        for(int i = 0; i < stones.length(); i++)
        {
            if(fre.find(stones[i]) != fre.end())
            {
                count++;
            }
        }

        return count;
    }
};