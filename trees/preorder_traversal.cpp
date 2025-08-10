struct Node {
	int data;
	Node* lftPtr, rghtPtr;

	Node(int val){
		data = val;
		lftPtr=rghtPrt=NULL;
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