/*class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       
        int mixi=0;
       
      for(int i=0;i<accounts.size();i++)
      {
              int sum=0;
         for(int j=0;j<accounts[i].size();j++)
         {
            sum=sum+accounts[i][j];
         }
         mixi=max(sum,mixi);
      }
      return mixi;
    }
};
*/
//using vector approach

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    int sum=0;
    vector<int>su1;
    for(int i=0;i<accounts.size();i++)
    {
        sum=0;
        for(int j=0;j<accounts[i].size();j++)
        {
            sum=sum+accounts[i][j];
        }
        su1.push_back(sum);
    }
    return *max_element(su1.begin(),su1.end());



    }
};