class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int n=numbers.size();
        int r=n-1;
        int sum=numbers[r]+numbers[l];
        vector<int>ans(2);
        while(sum!=target)
        {
            
            if(sum>target)
            {
            r--;
            }
            else if(sum<target)
            {
                l++;
            }
            sum=numbers[r]+numbers[l];
        }
        ans[0]=l+1;
        ans[1]=r+1;

        return ans;
        
    }
};
