/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
	public:
        void tripleTraversal(stack<pair<TreeNode*,int>> &st,vector<int>&inorder,vector<int>&preorder,vector<int>&postorder){
            if(st.empty()) return;
            
            while(!st.empty()){
                if(st.top().second==1){
                    preorder.push_back(st.top().first->data);
                    st.top().second++;
                    if(st.top().first->left!=nullptr) st.push({st.top().first->left,1});
                }else if(st.top().second==2){
                    inorder.push_back(st.top().first->data);
                    st.top().second++;
                    if(st.top().first->right!=nullptr) st.push({st.top().first->right,1});
                }else{
                    postorder.push_back(st.top().first->data);
                    st.pop();
                }
            }
        }

		vector<vector<int> > treeTraversal(TreeNode* root){
			stack<pair<TreeNode*,int>>st;
            vector<int>inorder,postorder,preorder;
            if(root!=nullptr) st.push({root,1});
            tripleTraversal(st,inorder,preorder,postorder);

            return {inorder,preorder,postorder};
		}
};