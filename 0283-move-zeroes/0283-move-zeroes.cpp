class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int x=0;
       for(int y=0;y<nums.size();y++){
             if(nums[y]!=0)
             {
                nums[x]=nums[y];
                x++;
             }
       }
       for(;x<nums.size();)
       {
           nums[x]=0;
           x++;
       }

    }
};

