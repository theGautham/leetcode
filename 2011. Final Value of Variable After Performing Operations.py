class Solution(object):
    def finalValueAfterOperations(self, operations):
        X=0
        for op in operations:
            if op == "X++" or op== "++X":
                X += 1
            elif op == "--X" or op== "X--":
                X -= 1
        return X
        
        