#include <algorithm>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int n=nums.size();
        int k,r,l;
        int sum;
        vector<vector<int>>ans;

        for(int i=0;i<n-2;i++)
        {
             if(i>0 && nums[i]==nums[i-1]) continue;
            k=-nums[i];
            l=i+1;
            r=n-1;
            sum=nums[l]+nums[r];
            while(r>l)
            {
                if (sum==k)
                {
                    ans.push_back({nums[l],nums[r],-k});
                    l++;
                    while (l < r && nums[l] == nums[l-1]) l++;
                }
                else if(sum<k)
                {
                    l++;
                    
                    
                }
                else if (sum>k)
                {
                    r--;
                }

                sum=nums[l]+nums[r];


            }

        }

        return ans;
        
    }
};
