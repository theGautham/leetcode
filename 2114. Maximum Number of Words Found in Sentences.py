class Solution(object):
    def mostWordsFound(self, sentences):
        maxWords=0

        for sentence in sentences:
            wordCount=len(sentence.split())
            maxWords=max(maxWords,wordCount)
        return maxWords
        