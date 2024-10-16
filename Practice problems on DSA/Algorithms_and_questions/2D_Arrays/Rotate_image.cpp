
// https://leetcode.com/problems/rotate-image/
#include <iostream>

using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int col = matrix[0].size();
        for (int i = 0; i < rows; i++)
        {
            for (int j = i + 1; j < col; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        int start = 0;
        int end = col;

        for (int i = 0; i < rows; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
