#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval)
    {
        int l0 = newInterval[0];
        int r0 = newInterval[1];
        int flag = 0;
        vector<vector<int>> res;

        for (auto& p : intervals) {
            if (p[0] > r0) {
                if (flag == 0) {
                    flag = 1;
                    res.push_back({ l0, r0 });
                }
                res.push_back(p);
            } else if (p[1] < l0) {
                res.push_back(p);
            } else {
                l0 = min(l0, p[0]);
                r0 = max(r0, p[1]);
            }
        }
        if (flag == 0)
            res.push_back({ l0, r0 });

        return res;
    }
};