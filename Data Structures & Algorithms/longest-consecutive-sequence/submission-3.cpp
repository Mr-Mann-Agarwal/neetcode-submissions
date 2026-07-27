class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       /*  std::map<int,int>mpp;
        int ans=1;
        for(const int &n:nums)
        {
            mpp[n]++;
        }
        
        auto it=mpp.begin();
        while(it!=mpp.end())
        {
            int temp=1;
            if(it->second==0)
            {
                it++;
            }
            else if(it->second!=0)
            {
                auto it2=it;
                it2++;

                while(it2->second!=0)
                {
                  it2++;
                  temp++;

                }
                if(temp>ans)ans=temp;
                
                
                
            }
        }

        return ans; */

        if(nums.empty())return 0;

        std::map<int,int>mpp;
        int ans=1;
        for(const int &n:nums)
        {
            mpp[n]++;
        }

        /* for (auto it :mpp)
        {
            int temp=1;
            auto it2=it;
            auto it3=it;
            it3++;
            while(it2.first==it3.first-1)
            {
                temp++;
                if(temp>ans)ans=temp;
                it2++;
                it3++;
            }

        } */

        for (auto it = mpp.begin(); it != mpp.end(); it++)
{
    int temp = 1;
    auto it2 = it;
    auto it3 = it;
    it3++;
    while (it3 != mpp.end() && it2->first == it3->first - 1)
    {
        temp++;
        if (temp > ans) ans = temp;
        it2++;
        it3++;
    }
}

        return ans;




    }
};
