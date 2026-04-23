class Solution:
    def isValid(self, s: str) -> bool:
        stk = []
        for i in s:
            top_index = len(stk)
            if(top_index == 0):
                stk.append(i)
                continue
            print(top_index," ",len(stk))
            top_element = stk[top_index-1]

            if((top_element == "(" and i == ")") or (top_element == "{" and i == "}") or (top_element == "[" and i == "]")):
                stk.pop()
            else:
                stk.append(i)
        if(len(stk) == 0):
            return True
        else:
            return False