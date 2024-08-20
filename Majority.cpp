class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int> counter;
        int thres = (nums.size())/2,majority;

        for(int i = 0;i < nums.size();i++) {
            counter[nums[i]] += 1;
        }

        for(const auto& count : counter) {
            int c = count.second;
            if (c > thres) {
                majority = count.first;
                break;
            }
        }

        return majority;
    }
};