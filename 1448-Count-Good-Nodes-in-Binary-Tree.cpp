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
private:
    void DFS(TreeNode* root, int &count, vector<int> path){
        if(root==NULL){return;}
        path.push_back(root->val);
        DFS(root->left, count, path);
        DFS(root->right, count, path);
        int mx=root->val;
        int size=path.size();
        bool visited=true;
        for(int i=0;i<size-1;i++){
            if(path[i]>mx){
                visited=false;
            }
        }
        if(visited){
            count++;
        }
        path.pop_back();
    }

public:
    int goodNodes(TreeNode* root) {
        if(root->left==NULL && root->right==NULL){
            return root->val;
        }
        int count=0;
        vector<int>path;
        DFS(root,count,path);
        return count;
    }
};