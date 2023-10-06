class Solution {
   public:
    int removeElement(vector<int>& nums, int val) {
        int start = 0;
        int end = nums.size() - 1;
        int k = 0;

        while (start <= end) {
            if (nums[start] == val) {
                swap(nums[start], nums[end]);
                end--;
            } else {
                k++;
                start++;
            }
        }
        return k;
    }
};