class Solution {
public:
    void reverseString(vector<char>& s) {
        int p= s.size();
        for(int i=0;i<p/2;i++)
        {
            swap(s[i],s[p-1-i]);
        }
        
        
        
    }
};
