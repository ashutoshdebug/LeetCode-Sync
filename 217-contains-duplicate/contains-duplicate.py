class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        ''' size = len(nums)
        for i in range(0, size):
            for j in range(i+1, size):
                if nums[i] == nums[j]:
                    return True
        return False '''

        # seen = set()
        # for n in nums:
        #     if n in seen:
        #         return True
        #     seen.add(n)
        # return False

        return len(nums) != len(set(nums))
