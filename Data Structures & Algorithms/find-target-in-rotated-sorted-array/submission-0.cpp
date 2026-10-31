class Solution {
public:
    int search(vector<int>& nums, int target) {

        //finding pivot
        int n = nums.size()-1;
        int r=n;
        int l=0;
        int m;

        while (r>l)
        {
            m=(l+r)/2;
            if(nums[m]>nums[r])
            {
                l=m+1;
            }
            else
            {
                r=m;
            }
        }

        //pivot at r
        if(target>nums[n])
        {
            //target in first part
            int left=0;
            int right=r-1;
            int mid;

            while(right>=left)
            {
                mid=(left+right)/2;
                if(nums[mid]==target)
                {
                    return mid;
                }
                else if(nums[mid]<target)
                {
                    left=mid+1;
                }
                else
                {
                    right=mid-1;
                }
            }
            return -1;
        }

        else
        {
            //target in second part
            int left=r;
            int right=n;
            int mid;

            while(right>=left)
            {
                mid=(left+right)/2;
                if(nums[mid]==target)
                {
                    return mid;
                }
                else if(nums[mid]<target)
                {
                    left=mid+1;
                }
                else
                {
                    right=mid-1;
                }
            }
            return -1;


        }
    }
};
