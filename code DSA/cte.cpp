
#include<iostream>

#include<conio.h>

using namespace std;

#define MAX 50

#define TRUE 1

#define FALSE  0

int A[MAX][MAX], n, u;

void Init(){
	cin>>n;
	for(int i=1; i<=n;i++){
		for(int j=1; j<=n;j++){
			cin>>A[i][j];
		}
	}
}

int Kiemtra(){
	int s, d;
	d=0;
	for(int i=1; i<=n;i++){
	s=0;
	for(int j=1; j<=n;j++)
		s+=A[i][j];
		if(s%2){
			d++; 
			u=i;
		}
	}
	if(d!=2) return(FALSE);
	return(TRUE);
}

void DDEULER(){

	int v, x, top, dCE;
	int stack[MAX], CE[MAX];
	top=1;
	stack[top]=u;
	dCE=0;
	do {
		v = stack[top];
		x=1;
		while (x<=n && A[v][x]==0) x++;
		if (x>n) {
			dCE++; CE[dCE]=v; top--;
		}
		else {
			top++; stack[top]=x;
			A[v][x]=0; A[x][v]=0;
		}
	} while(top!=0);
	cout<<" Co duong di Euler:";
	for(x=dCE; x>0; x--)
	cout<<CE[x]<<" ";
}



void Tim(){
	int v, x, top, dCE;
	int stack[MAX], CE[MAX];
	top=1;
	stack[top]=u;
	dCE=0;
	do {
		v = stack[top];
		x=1;
		while (x<=n && A[v][x]==0) 
			x++;
		if (x>n) { 
	   		dCE++;
	   		CE[dCE]=v;
	   		top--;
	  	}
	  	else { 
	   		top++;
	   		stack[top]=x;	
	   		A[v][x]=0;	
	   		A[x][v]=0;
	  	}
	} 
	while(top!=0);
 	cout<<" Co chu trinh Euler:";
 	for(x=dCE; x>0; x--)
	cout<<CE[x]<<" ";
}

int main(){
	Init();
	if(Kiemtra()) DDEULER();
  	Tim();

}
