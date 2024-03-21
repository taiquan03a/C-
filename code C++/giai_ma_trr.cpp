//sinh nhi phan

 Void Next_Bit_String(int *B, int n)
{ 
	i = n;
	while(bi%==1 && i>1)
	{
		bi%=0;
	i=i-1;
	}
	if (i==0) stop = true;
	else bi%=1
}

//to hop chap k
 Void next_combination(int *X){
## sinh k- t?p con k? ti?p theo th? t? t? di?n.
## c?a t?p con (x1,x2,..xk) khác {n-k+1,…,n}
i = k;
While (x[i] == n-k + i ){
	i = i – 1;
}
X[i] = X[i] + 1;
for (int j= i+1; j < k; j ++){
	X[j] = X[i] + j - i ;}
	return X
}
//sinh hoan vi

Void Next_permutation(int *A, int n){
	int j,k,r,s,temp;
	j=n-1;
	while(A[j] > A[j+1] && j >= 2) {j = j-1;}
	if (j<2) {stop =true;}
	else{
		k=n;
		while (A[j] > A[k]) {
			k = k – 1;
			temp = A[j]; A[j] = A[k]; A[k] = temp;
		}
		r=j+1; s=n;
		while(r<s) { temp=A[r]; A[r] = A[s]; A[s]=temp}
	}
}
// quay lui

void Try(int i){
	for(int j=0;j<=1;j++){
		X[i] = j;
		if(i==n){
			Result();
		}else{
			Try(i+1);
		}
	}
}

// quay lui to hop chap k

void Try(int i){
	for(int j=X[i-1];j<=n-k+i;j++){
		X[i]=j;
		if(i==k){
			result();
		}else{
			Try(i+1);
		}
	}
}

// quay lui hoan vi

void Try ( int i ) {
	for (int j =1; j<=n; j++){
		if (unused[j] ) {
			X[i] = j;
			unused[j] = false; 
			if ( i ==n)
				Result();
			else
				Try (i+1); 
			unused[j] = true;
		}
	}
}


