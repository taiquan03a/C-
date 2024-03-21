#include<bits/stdc++.h>

using namespace std;
struct node{
	int data;
	node *left;
	node *right;
	node(int x){
		data = x;
		left = right = NULL;
	}
};

node *insertNode(node *root,int key){
	if(root == NULL){
		return new node(key);
	}
	if(key < root->data){
		root->left = insertNode(root->left,key);
	}
	else {
		root->right = insertNode(root->right,key);
	}
	return root;
}
void preorder(node *root){
	if(root == NULL) return;
	cout<<root->data<<' ';
	preorder(root->left);
	preorder(root->right);
}
int main(){
	int t;cin>>t;
	while(t--){
		int n; cin>>n;
		node *root = NULL;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			root = insertNode(root,x);
		}
		preorder(root);
		cout<<endl;
	}
}
