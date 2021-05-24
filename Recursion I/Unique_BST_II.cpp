/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> generateTrees(int end, int start = 1) {
        vector<TreeNode*>ans;
        if(start > end)
            ans.push_back(NULL);
        else if(start == end)
            ans.push_back(new TreeNode(start));
        else{
            
            for(int i = start ; i<= end; i++){
                auto l = generateTrees(i-1, start), r = generateTrees(end, i + 1);
                for(auto j : l)
                    for(auto k : r)
                        ans.push_back(new TreeNode(i, j, k));
            }
        };
        return ans;
    }
};