class Solution {
public:
    int findMin(vector<int> &nums) {
        int n= nums.size()-1;
        int l=0;
        int r=n;
        int m;

        while(r>l)
        {
            m=(r+l)/2;
            if(nums[m]>nums[r])
            {
                //m is in bigger half
                l=m+1;
            }
            else
            {
                r=m;
            }
        }

        return nums[r];
        
    }
};
