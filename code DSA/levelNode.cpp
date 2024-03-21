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
	if(root->data == u){
		makeRoot(root,u,v,c);
	}else{
		insertNode(root->left,u,v,c);
		insertNode(root->right,u,v,c);
	}
}
void levelNode(node *root){
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node *x = q.front();
		q.pop();
		cout<<x->data<<" ";
		if(x->left != NULL) q.push(x->left);
		if(x->right != NULL) q.push(x->right);
	}
}
void spailorder(node *root){
	stack<node*> s1,s2;
	s1.push(root);
	while(!s1.empty() && !s2.empty()){
		while(!s1.empty()){
			node *x = s1.top();
			cout<<x->data<<" ";
			s1.pop();
			if(x->right != NULL) s2.push(x->right); 
			if(x->left != NULL) s2.push(x->left);
		}
		while(!s2.empty()){
			node *y = s2.top();
			cout<<y->data<<" ";
			s2.pop();
			if(y->left != NULL) s1.push(y->left);
			if(y->right != NULL) s1.push(y->right);
		}
	}
}
main(){
	int t; cin>>t;
	while(t--){
		int n,u,v; char c;
		cin>>n;
		node *root = NULL;
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
