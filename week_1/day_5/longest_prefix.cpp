class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string k = strs[0];

        for(int i=1;i<strs.size();i++) 
        {
            while(strs[i].find(k) != 0)
            {                
                k.pop_back();
            }
        }

        return k;
      }
};
