class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        std::map<char,int> mpp1,mpp2;
        for(int i=0;i<s.length();i++)
        {
                mpp1[s[i]]++;
                mpp2[t[i]]++;
        }

        if(mpp1==mpp2)return true;
        else{return false;};

    }
};
