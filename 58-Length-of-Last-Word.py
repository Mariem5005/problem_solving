class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s.strip()
        ss=s.split(' ')
        return len(ss[-1])
