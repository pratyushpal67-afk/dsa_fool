class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        maxLength = 0
        charSet = set()
        left = 0

        
        for i in range(n) :
            if s[i] not in charSet :
                charSet.add(s[i])
                maxLength = max(maxLength, i - left + 1)
            else :
                while s[i] in charSet :
                    charSet.remove(s[left])
                    left += 1
                charSet.add(s[i])

        return maxLength