// https://leetcode.com/problems/move-zeroes/submissions/1397262184/
#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int temp = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {

                swap(nums[i], nums[temp]);
                temp++;
            }
        }
    }
};