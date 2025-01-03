//https://leetcode.com/problems/same-tree/
#include <iostream>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q != NULL){
            return false;
        }
        if(q == NULL && p != NULL){
            return false;
        }
        if(p == q){
            return true;
        }
        
        bool one = isSameTree(p->left,q->left);
        bool two = isSameTree(p->right, q->right);
        bool value = p->val == q->val;
        if(one&&two&&value){
            return true;
        }
        else{
            return false;
        }

        
    }
};

int main() {
    return 0;
}