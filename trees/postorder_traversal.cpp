struct Node {
	int data;
	Node * lftPtr,rghtPtr;

	Node(int val){
		data=val;
		lftPtr=rghtPrt=NULL;
	}
}


void postorder(Node* root){
	if(root==null){
		return;
	}

	postorder(root->lftPtr);
	postorder(root->rghtPtr);

}