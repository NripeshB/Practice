//https://www.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution{
  public:
    pair<int, int> solve(Node*root){
        if(root == NULL){
            pair<int, int> p = make_pair(0, 0);
            return p;
        }
        
        pair<int,int> left = solve(root->left);
        pair<int,int> right = solve(root->right);
        
        pair<int, int> res;
        res.first = root->data+left.second + right.second;
        res.second = max(left.first, left.second) + max(right.first, right.second);
        return res;
    }

    int getMaxSum(Node *root) 
    {
        pair<int, int> p = solve(root);
        int ans = max(p.first, p.second);
        return ans;
    }
};

int main() {
    return 0;
}