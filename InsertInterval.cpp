class Solution {
public:
    int inCbinarySearch(const vector<vector<int>>& intervals, int val) {
        int target = val; 
        int left = 0;
        int right = intervals.size() - 1;
        int result = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (intervals[mid][0] < target) {
                result = mid; 
                left = mid + 1; 
            } else {
                right = mid - 1; 
            }
        }

        return result;
    }

    int deCbinarySearch(const vector<vector<int>>& intervals, int val) {
        int target = val; 
        int left = 0;
        int right = intervals.size() - 1;
        int result = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (intervals[mid][1] > target) {
                result = mid; 
                right = mid - 1; 
            } else {
                left = mid + 1; 
            }
        }

        return result;
    }

    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int old_first, old_sec;
        int new_first = newInterval[0], new_sec = newInterval[1];
        int inc_pos, dec_pos;
        vector<int> new_interval;

        // Find the position where the new interval should be merged.
        inc_pos = inCbinarySearch(intervals, new_first);
        dec_pos = deCbinarySearch(intervals, new_sec);

        if (inc_pos != -1) {
            old_first = intervals[inc_pos][0];
            new_interval.push_back(old_first);
            if (dec_pos != -1) {
                old_sec = intervals[dec_pos][1];
                new_interval.push_back(old_sec);
            } else {
                new_interval.push_back(new_sec);
            }

            // Remove the intervals that overlap with the new interval
            intervals.erase(intervals.begin() + inc_pos, intervals.begin() + dec_pos + 1);
            intervals.insert(intervals.begin() + inc_pos, new_interval);
        } 
        else {
            new_interval.push_back(new_first);
            if (dec_pos != -1) {
                old_sec = intervals[dec_pos][1];
                new_interval.push_back(old_sec);
            } else {
                new_interval.push_back(new_sec);
            }

            // Remove the intervals that overlap with the new interval
            intervals.erase(intervals.begin(), intervals.begin() + dec_pos + 1);
            intervals.push_back(new_interval);
        }

        return intervals;
    }
};
