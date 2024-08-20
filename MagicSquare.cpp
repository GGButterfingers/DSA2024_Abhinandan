class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size();
        int sum1 = 0,sum2 = 0,sum3 = 0,count = 0,j,k,i;
        bool ms = true;
        if (n < 3) 
            return count;
        i = 0;
        while (i + 2 < grid.size()) {
            k = i;
            while (k < (i + 3)) {
                j = k;
                while (j + 2 < grid[k].size() && ms) {
                    sum1 += grid[k][j];
                    sum2 += grid[j][k];
                    if (k == j)
                        sum3 += grid[k][j];
                    j += 1;
                }
                if (sum1 == sum2) {
                    ms = true;
                    sum1 = 0;
                    sum2 = 0;
                }
                else
                    ms = false;
                k += 1;
            }
            if (sum1 == sum2 && sum2 == sum3)
                count++;
            i += 1;
            sum1 = sum2 = sum3 = 0;
        }
        return count;
    }
};