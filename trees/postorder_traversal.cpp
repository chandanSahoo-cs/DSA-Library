struct Node {
	int data;
	Node * lftPtr,rghtPtr;

	Node(int val){
		data=val;
		lftPtr=rghtPrt=NULL;
	}
}


void postorder(Node* root){
	if(root==NULL){
		return;
	}

	postorder(root->lftPtr);
	postorder(root->rghtPtr);
	cout<<root->data<<" ";

}