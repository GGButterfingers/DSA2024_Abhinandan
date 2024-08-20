class Solution:

    def search_ab(self, string, x):
        cost = 0
        present = True
        while present:
            if 'ab' in string:
                cost += x
                index = string.index('ab')
                string = string[:index] + string[index+2:]
            else:
                present = False
        return cost, present, string

    def search_ba(self, string, y):
        cost = 0
        present = True
        while present:
            if 'ba' in string:
                cost += y
                index = string.index('ba')
                string = string[:index] + string[index+2:]
            else:
                present = False
        return cost, present, string

    def maximumGain(self, s: str, x: int, y: int) -> int:
        present_ab, present_ba = True, True
        cost_ab, cost_ba = 0, 0
        while present_ab or present_ba:
            if x >= y and present_ab:
                cost_ab, present_ab, s = self.search_ab(s, x)
            elif x < y and present_ba:
                cost_ba, present_ba, s = self.search_ba(s, y)
        return cost_ab + cost_ba