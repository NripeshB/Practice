// https://leetcode.com/problems/search-a-2d-matrix-ii/
#include <iostream>

using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowindex = 0;
        int colindex = col - 1;

        while (rowindex < row && colindex >= 0)
        {
            int mid = matrix[rowindex][colindex];

            if (mid == target)
            {
                return 1;
            }

            else if (mid < target)
            {
                rowindex++;
            }

            else
            {
                colindex--;
            }
        }
        return 0;
    }
};