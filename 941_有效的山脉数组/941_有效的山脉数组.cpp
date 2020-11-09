#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& A)
    {
        int flag = 0;
        int count = 0;
        int i;
        if (A.size() < 3)
            return false;
        for (i = 0; i < A.size() - 1; i++) {
            if (A[i] < A[i + 1]) {
                if (flag == 0) {
                    flag = 1;
                    count++;
                }

                if (flag == -1)
                    return false;
            }
            if (A[i] > A[i + 1]) {
                if (flag == 0)
                    return false;
                if (flag == 1) {
                    flag = -1;
                    count++;
                }
            }
            if (A[i] == A[i + 1])
                return false;
        }
        if (count == 2)
            return true;
        else

            return false;
    }
};