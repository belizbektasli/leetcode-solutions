#This piece of code returns a new array whose each element is the sum of the previous elements in the given array.
class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        running = []
        total = 0
        for i in nums:
            total = i + total
            running.append(total) 
        return running
