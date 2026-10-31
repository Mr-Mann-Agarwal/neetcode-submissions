class Solution {
public:
    int findMin(vector<int> &nums) {
        int r=nums.size()-1;
        int l=0;
        int m;

        

        while(r>l)
        {
            m=(l+r)/2;
            
            if(nums[m]>nums[r])
            {
                //m belongs to bigger set
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
