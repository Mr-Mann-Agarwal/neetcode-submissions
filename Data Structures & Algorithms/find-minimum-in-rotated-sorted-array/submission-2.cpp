class Solution {
public:
    int findMin(vector<int> &nums) {
        int n= nums.size()-1;
        int r =n;
        int l =0;
        int mid;
        int ans=INT_MAX;

        if(nums[l]<nums[r])
        {
            return nums[l];
        }
        if(l==r)
        {
            return nums[r];
        }

        while(l<r)
        {
            mid =(r+l)/2;
            if(nums[mid]<ans)ans=nums[mid];

             if (nums[mid]>nums[r])
            {
                l=mid+1;
            }

            else 
            {
                r=mid;
            }
            
        }
        return nums[l];
    }
};


