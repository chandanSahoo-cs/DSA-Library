struct Node {
	int data;
	Node * lftPtr, rghtPtr;

	Node(int val){
		data=val;
		lftPtr=rghtPtr=NULL;
	}
}

void inorder(Node* root){
	if(root==NULL){
		return;
	}

	inorder(root->lftPtr);
	cout<<root->data<<" ";
	inorder(root->rghtPtr);
}