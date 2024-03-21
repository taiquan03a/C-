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
//node *makeNode(int x){
//	node *newNode = new node(v);
//	newNode->data = x;
//	newNode->left = NULL;
//	newNode->right = NULL;
//	return newNode;
//}
void makeRoot(node *root,int u,int v, char c){
	if(c == 'L') root->left = new node(v);
	else root->right = new node(v);
}
void insertNode(node *root, int u,int v, char c){
	if(root == NULL) return;
	if(root->data == u){
		makeRoot(root,u,v,c);
	}else{
		insertNode(root->left,u,v,c);
		insertNode(root->right,u,v,c);
	}
}
void inorder(node *root){
	if(root != NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
void preorder(node *root){
	if(root != NULL){
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(node *root){
	if(root != NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
}
int main(){
	node *root = NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int u,v; char c;
		cin>>u>>v>>c;
		if(root == NULL) {
			root = new node(u);
			makeRoot(root,u,v,c);
		}
		else{
			insertNode(root,u,v,c);
		}
	} 
	inorder(root);
	cout<<endl;
	preorder(root);
	cout<<endl;
	postorder(root);
	
}
//6 1 2 L 1 3 R 2 4 L 2 5 R 3 6 L 3 7 R
