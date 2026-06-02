class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        set<int> s(nums.begin(),nums.end());

        int p = s.size();


        if(n==p) 
            return false;
        else 
            return true;
        

        
    }
};
