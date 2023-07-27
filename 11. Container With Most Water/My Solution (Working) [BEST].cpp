class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        // create two empty vectors
        vector<int> maxLeft(n, 0);
        vector<int> maxRight(n, 0);

        // set beginning of vector to beginning of heights and fill from left to right the biggest height
        maxLeft[0] = height[0];
        for (int i = 1; i < n; i++) {
            maxLeft[i] = max(maxLeft[i - 1], height[i]);
        }

        // set end of vector to end of heights and fill from right to left the biggest height
        maxRight[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            maxRight[i] = max(maxRight[i + 1], height[i]);
        }

        // determine smallest height of maxLeft and maxRight vector and subtract the vector height from that smallest height.
        int trappedWater = 0;
        for (int i = 0; i < n; i++) {
            int minHeight = min(maxLeft[i], maxRight[i]);
            trappedWater += (minHeight - height[i]);
        }
        
        return trappedWater;
    }
};
