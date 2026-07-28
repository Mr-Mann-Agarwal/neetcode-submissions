class Solution {
public:
    bool isPalindrome(string s) {
        std::string str;
        for(char c:s)
        {
            if(c>=97&&c<=122)
            {
                str.push_back(c);
            }
            if(c>=48&&c<=57)
            {
                str.push_back(c);
            }

            else if(c>=65&&c<=90)
            {
                c=c+32;
                str.push_back(c);
            }
        }
        int n=str.size();

        for(int i=0;i<str.size();i++)
        {
            if(str[i]!=str[n-i-1])
            {
                std::cout<<str;
                std::cout<<n;
                return false;
            }
        }


        return true;



        
    }
};
