class Solution {
public:
    int maxArea(vector<int>& height) {
        size_t best = 0;
        for (size_t i = 0, j = height.size() - 1; i < j; ) {
            best = std::max(best, std::min(height[i], height[j]) * (j - i));
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return (int)best;
    }
};
