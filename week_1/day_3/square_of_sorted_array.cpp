class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sqr;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int m= nums[i]*nums[i];
            sqr.push_back(m);
        }
        sort(sqr.begin(),sqr.end());
        return sqr;
    }
};
