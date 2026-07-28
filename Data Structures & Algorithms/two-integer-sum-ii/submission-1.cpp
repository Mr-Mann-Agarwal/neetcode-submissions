class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        auto ptr1 = numbers.begin();
        auto ptr2 = numbers.end()-1;
        int sum=0;
        std::vector<int> ans={0,0};

        while (*(ptr2)>*(ptr1))
        {
            sum=*(ptr2)+*(ptr1);
            if(sum>target)
            {
                ptr2--;
            }
            else if (sum<target)
            {
                ptr1++;
            }

            if(sum==target)
            {
                ans[0]=(ptr1)-numbers.begin()+1;
                ans[1]=(ptr2)-numbers.begin()+1;
                return ans;

            }

        }

        
        
    }
};
