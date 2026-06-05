class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string str="";
        for(int i=0;i<n;i++)
        {
            if((s[i]<=57 && s[i]>=48)||(s[i]<=90 && s[i]>=65)||(s[i]<=122 && s[i]>=97))
            {
                str.push_back(tolower(s[i]));
            }
        }
        for(int k=0;k<(str.length())/2;k++)
        {
            if(str[k]!=str[str.length()-k-1]) return false;
        }
        return true;

        
    }
};