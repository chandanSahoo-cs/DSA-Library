struct Node {
	int data;
	Node* lftPtr, rghtPrt;

	Node(int val){
		data = val;
		lftPtr=rghtPrt=null;
	}
}

void preorder(Node * root){
	if(node ==  null){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->lftPtr);
	preorder(root->rghtPrt);
}