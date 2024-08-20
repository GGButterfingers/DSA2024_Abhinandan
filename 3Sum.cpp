class Solution {
public:

    void InsertionSort(vector<int>& nums) {
        int n = nums.size(),key,j;
        for (int i = 1; i < n; ++i) {
            key = nums[i];
            j = i - 1;

            while (j >= 0 && nums[j] < key) {
                nums[j + 1] = nums[j];
                j -= 1;
            }
            nums[j + 1] = key;
        }
    }

    int find_negative(vector<int>& nums) {
        int pos = -1;
        for (int i = 0;i < nums.size();i++) {
            if (nums[i] < 0) {
                pos = i;
                break;
            }
        }
        return pos;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vec;
        vector<int> sum;

        InsertionSort(nums);

        int end = find_negative(nums);
        if (end == -1)
            return NULL;
        
        for (int i = 0;i < end;i++) {
            cur = nums[i];
        }
    }
};