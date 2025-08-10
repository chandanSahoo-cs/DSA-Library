struct Node {
	int data;
	Node* lftPtr, rghtPtr;

	Node(int val){
		data = val;
		lftPtr=rghtPtr=NULL;
	}
}

void preorder(Node * root){
	if(node ==  NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->lftPtr);
	preorder(root->rghtPtr);
}