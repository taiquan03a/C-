#include<bits/stdc++.h>
using namespace std;
int n;
int a[1005][1005];
set<int>adj[1005];
int degree[1005];
void nhap()
{
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin >> a[i][j];
			if(a[i][j])
			{
				adj[i].insert(j);
				adj[j].insert(i);
				degree[i]++;
				degree[j]++;
			}
		}
	}
}
int kiemtra(){
	int i, j, s, d; d=1;
	for(i=1; i<=n;i++){
		s=0;
		for(j=1; j<=n;j++) s+=a[i][j];
		if(s%2==1) d=i;
	}
	return d;
}
void euler(int v)
{
	stack<int>st;
	vector<int>EC;
	st.push(v);
	while(!st.empty()){
		int x = st.top();
		if(adj[x].size() != 0){
			int y = *adj[x].begin();
			st.push(y);
			adj[x].erase(y);
			adj[y].erase(x);
		}else{
			st.pop();
			EC.push_back(x);
		}
	}
	reverse(EC.begin(),EC.end());
	cout << "Duong di Euler : "<<endl;
	for(auto it : EC) cout << it << " ";
}

int main()
{
	nhap();
	euler(kiemtra());
}

//13
//0 1 0 0 0 1 0 0 0 0 0 0 0
//1 0 1 0 1 1 0 0 0 0 0 0 0
//0 1 0 1 1 0 0 0 0 0 1 0 0
//0 0 1 0 0 0 1 1 0 0 1 0 0
//0 1 1 0 0 1 1 0 0 0 0 0 0
//1 1 0 0 1 0 1 0 0 0 0 0 0
//0 0 0 1 1 1 0 1 0 0 0 0 0
//0 0 0 1 0 0 1 0 1 1 0 0 0
//0 0 0 0 0 0 0 1 0 1 0 1 1
//0 0 0 0 0 0 0 1 1 0 1 1 0
//0 0 1 1 0 0 0 0 0 1 0 1 0
//0 0 0 0 0 0 0 0 1 1 1 0 1
//0 0 0 0 0 0 0 0 1 0 0 1 0