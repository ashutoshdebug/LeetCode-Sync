class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        size = len(nums)
        ma_x = 0
        missing_num = 0
        for i in range(size):
            if (ma_x <= nums[i]):
                ma_x = nums[i]
        
        for j in range (0, size+1):
            if(j not in nums):
                missing_num += j
                break
        # print(missing_num)
        return missing_num
        