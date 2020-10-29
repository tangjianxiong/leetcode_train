#include <stdio.h>
#include <memory.h>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        int arr[101];
        int i,temp;
        int cnt = 0;
        memset(arr, 0, sizeof(arr));
        for(auto i:nums)
            arr[i]++;
        for (i = 0; i < 101;i++){
            temp=arr[i];
            arr[i]=cnt;
            cnt = cnt + temp;
        }
        vector<int> ret;
        for(auto i:nums)
        {
            ret.push_back(arr[i]);
        }
        return ret;
    }
};
