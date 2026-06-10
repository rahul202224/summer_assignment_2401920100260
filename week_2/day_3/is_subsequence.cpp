class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        int k = s.size();
        int l = t.size();

        while(i < k && j < l) 
        {
            if(s[i] == t[j]) 
            {
                i++;
            }
            j++;
        }

        return i== k;
    }
};
