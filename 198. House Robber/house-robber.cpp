class Solution {
public:
    int rob(vector<int>& nums) {
        
        int prev1 = nums[0];
        int prev2 = 0;
        int n = nums.size();
        
        for(int i=1;i<n;i++){
            int peak = nums[i];
            if(i>1){
                peak += prev2;
            }
            int notPeak = 0 + prev1;
            int curri = max(peak,notPeak);
            prev2 = prev1;
            prev1 = curri;
        }
        return prev1;
    }
};
