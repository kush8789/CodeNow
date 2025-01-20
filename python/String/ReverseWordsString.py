class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.strip().split()
        words.reverse()
        return ' '.join(words)

n=input()
s = Solution()
print(s.reverseWords(n))