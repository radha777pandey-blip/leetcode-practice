class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n=nums.size();
        long long sum=0;
        int len=n;
        
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        int target=sum%p;
        if(sum%p==0)
        return 0;
        else
        {
            unordered_map<int,int>sb;
            sb[0]=-1;
            long long prefix=0;
            for(int i=0;i<n;i++)
            {
                prefix=(prefix+nums[i])%p;
                int needed=(prefix-target+p)%p;
                if(sb.find(needed)!=sb.end())
                {
                    len=min(len,i-sb[needed]);
                }
                sb[prefix]=i;
            }
        }
    if(len==n){
       return -1;
    }
      return len;
    }
};