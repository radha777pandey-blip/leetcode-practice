//time complexity of this code=o(n)
//space: extra space it is using as storing the memory wheather it has seen the elemenet0[n]
/* class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      unordered_set<int>us;
      int k=0;
      for(int i=0;i<nums.size();i++)
      {
        if(us.find(nums[i])!=us.end())
        {
         continue;
        }
        us.insert(nums[i]);
        nums[k]=nums[i];
        k++;
        k=us.size();
      }
      return k;
    }
};
*/
//optimal because it is storted so use in place checking of adjacent elements
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
int i,k;
k=1;
if(nums.empty()) return 0;
for(i=1;i<nums.size();i++)
{
    if(nums[i]!=nums[k-1])
    {
      nums[k]=nums[i];
      k++;
    }
}
return k;

    }
};