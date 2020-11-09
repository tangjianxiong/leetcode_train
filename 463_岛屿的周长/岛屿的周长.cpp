#include<stdio.h>
#include<vector>

using namespace std;
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m=grid.size();
        int n = grid[0].size();
        int u = 0, d = 0, l = 0, r = 0;
        int result = 0;
        if (grid.size() <= 0 || grid[0].size()<= 0) {
            return result;
        }
        for (int  i = 0; i < m; i++)
        {
            for (int  j = 0; j < n; j++)
            {
                if(grid[i][j]==1){
                    u= j > 0 ? grid[i][j - 1] : 0;
                    d= j < n - 1 ? grid[i][j + 1] : 0;
                    l= i > 0 ? grid[i - 1][j] : 0;
                    r = i < m - 1 ? grid[i + 1][j] : 0;

                    result += (4 - u - d - l - r);
                }
            }
            
        }

        return result;
    }
};