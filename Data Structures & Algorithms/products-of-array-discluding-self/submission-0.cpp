class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int productall = 1;
        std::vector<int> mid;
        std::vector<int> ans;
        ans.push_back(1);
        for (int i = 1; i < nums.size(); i++) {
            ans[0] = ans[0] * nums[i];
        }

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] == 0) {
                int product=1;
                for (int j = 0; j < nums.size(); j++) {
                    if(j!=i+1) product=product*nums[j];
                }
                ans.push_back(product);
            }
            else {ans.push_back((ans[i] / nums[i + 1]) * nums[i]);}
        }

        return ans;
    }
};
