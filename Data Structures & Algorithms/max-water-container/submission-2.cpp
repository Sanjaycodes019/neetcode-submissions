class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size()-1;
        int maxHeight = INT_MIN;
        while(i<j){
            int l = j - i;
            int b = min(heights[i], heights[j]);
            maxHeight = max(maxHeight, l*b);
            if(heights[i]<heights[j]) i++;
            else j--;
        }
        return maxHeight;
    }
};
