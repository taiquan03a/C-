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

void makeRoot(node *root,int u,int v,char c){
	if(c == 'L') root->left = new node(v);
	else root->right = new node(v);
}
void insertNode(node *root,int u,int v,char c){
	if(root == NULL) return;
	if(root->data == u) makeRoot(root,u,v,c);
	else {
		insertNode(root->left,u,v,c);
		insertNode(root->right,u,v,c);
	}
}
void spailorder(node *root){
	stack<node*> s1,s2;
	s1.push(root);
	while(!s1.empty() && !s2.empty()){
		while(!s1.empty()){
			node *x = s1.top();
			s1.pop();
			cout<<x->data<<" ";
			if(x->right != NULL) s2.push(x->right); 
			if(x->left != NULL) s2.push(x->left);
		}
		while(!s2.empty()){
			node *y = s2.top();
			s2.pop();
			cout<<y->data<<" ";
			if(y->left != NULL) s1.push(y->left);
			if(y->right != NULL) s1.push(y->right);
		}
	}
}

main(){
	int t; cin>>t;
	while(t--){
		node *root = NULL;
		int n; cin>>n;
		int u,v; char c;
		for(int i=0;i<n;i++){
			cin>>u>>v>>c;
			if(root == NULL) {
				root = new node(u);
				makeRoot(root,u,v,c);
			}
			else insertNode(root,u,v,c);
		}
		spailorder(root);
		cout<<endl;
	}
}
