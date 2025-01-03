// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
#include <iostream>

using namespace std;

int main()
{

    return 0;
}
class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        while (s.length() != 0 && s.find(part) < s.length())
        {
            s.erase((s.find(part)), part.length());
        }
        return s;
    }
};