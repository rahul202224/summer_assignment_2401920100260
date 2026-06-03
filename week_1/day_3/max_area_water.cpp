class Solution {
public:
    int maxArea(vector<int>& h) {

        int maxarea = 0;
        int n = h.size();
        int i = 0;
        int j = n-1;

        while(i<j)
        {
            int area =min(h[j], h[i]) * (j-i) ;
            maxarea = max(maxarea,area) ;
                
            if(h[i]<h[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxarea ;
        
    }
};
