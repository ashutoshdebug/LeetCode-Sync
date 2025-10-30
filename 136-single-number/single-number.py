class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        unique_numbers = 0
        for i in nums:
            unique_numbers ^= i
        return unique_numbers  
        