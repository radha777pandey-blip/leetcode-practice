class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int p=0;
        for(int n:nums)
        {
            int i=0;
            while(n!=0)
            {
                n=n/10;
                i++;
            }
            if(i%2==0)
            {
             p++;
            }
        }
        return p;
    }
};