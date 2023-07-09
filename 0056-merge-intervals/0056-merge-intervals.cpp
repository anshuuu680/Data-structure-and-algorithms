class Solution {
public:
  vector<vector<int>> merge(vector<vector<int>>& intervals) {
    // Sort intervals based on the start time
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;
    ans.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++) {
        // Check if the current interval overlaps with the previous one
        if (intervals[i][0] <= ans.back()[1]) {
            // Merge the intervals by updating the end time of the last interval
            ans.back()[1] = max(intervals[i][1], ans.back()[1]);
        } else {
            // Add a new interval to the merged intervals
            ans.push_back(intervals[i]);
        }
    }

    return ans;
}


};