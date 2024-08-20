#include<vector>
#include<map>
#include <limits>

class Solution {
public:
    vector<int> to_digits(int num) {
        vector<int> digits;
        int digit;
        while(num != 0) {
            digit = num%10;
            num /= 10;
            digits.push_back(digit);
        }
        return digits;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        map<int,int> codes,reversemap;
        int cur,number = 0;
        vector<int> digits;
        for(int i = 0;i < mapping.size();i++) {
            codes.insert(i,mapping[i]);
        }
        for(int i = 0;i < nums.size();i++) {
            cur = nums[i];
            digits = to_digits(cur);
            for(int j = 0;j <= digits.size();j++) {
                number = number + (codes[digits[j]] * pow(10,j));
            }
            reversemap.insert(number,cur);
            number = 0;
        }
        for(int i = 0;i < reversemap.size();i++) {
            nums[i] = reversemap[i];
        }
        return nums;
    }
};