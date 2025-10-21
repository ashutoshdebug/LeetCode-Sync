class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        // Sync

        for(int i = 0; i<n; i++){
            if (nums[i] != 0)
            {
                swap(nums[start],nums[i]);
                start += 1;
            }
        }
    }
};