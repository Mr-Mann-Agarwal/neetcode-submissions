class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int,int>mpp;
        std::multimap<int,int>mpp2;
        std::vector<int> answer;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto const& it:mpp)
        {
            std::pair p={it.second,it.first};
            mpp2.insert(p);
        }


        int count=k;
        for(auto it=mpp2.rbegin();it!=mpp2.rend();++it)
        {
            if(count==0)break;
            answer.push_back(it->second);
            count--;


        }
        return answer;
    }
};
