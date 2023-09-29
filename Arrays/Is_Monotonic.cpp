class Solution {
   public:
    bool isMonotonic(vector<int>& nums) {
        bool isInc = true, isDesc = true;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) isDesc = false;
            if (nums[i] < nums[i - 1]) isInc = false;
        }
        return isInc || isDesc;
    }
};