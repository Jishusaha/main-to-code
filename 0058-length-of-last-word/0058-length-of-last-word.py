class Solution(object):
    def lengthOfLastWord(self, s):
            s=s.strip()
            last_space = s.rfind(" ")
            last_word = s[last_space + 1:]
            return len(last_word)
          

    