class Stack:
    def __init__(self):
        self.stack = []
    
    def push(self, item):
        self.stack.append(item)
    
    def pop(self):
        if not self.is_empty():
            return self.stack.pop()
        else:
            raise IndexError("pop from empty stack")
    
    def peek(self):
        if not self.is_empty():
            return self.stack[-1]
        else:
            raise IndexError("peek from empty stack")

    def is_empty(self):
        return len(self.stack) == 0
    
    def size(self):
        return len(self.stack)

class Solution:
    def reverseParentheses(self, s: str) -> str:
        
        stack = Stack()
        string = list(s)
        i = 0
        while i < len(string):
            if string[i] == '(':
                stack.push(i)
            elif string[i] == ')':
                start = stack.pop()
                string = string[:start] + string[start+1:i][::-1] + s[i+1:]
                i = start
            i += 1
        
        final_string = ''.join(string)
        return final_string
