#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    priority_queue<int,vector<int>,greater<int>> q;
    long long x;
    while(n--){
        cin>>x;
        q.push(x);
    }
    //cout<<q.top()<<endl;
    long long ans=0,tmp=0;
    while(q.size() > 1){
        if(q.size()>=k){
            int min=0,max=0;
            long long cnt = 0;
            for(int i=1;i<=k;i++){
                if(i==1) min = q.top();
                if(i==k) max = q.top();
                int top = q.top();
                cnt+=top;
                q.pop();
            }
            ans += max-min;
            q.push(cnt);
        }else{
            int m = q.size();
            int min=0,max=0;
            long long cnt = 0;
            for(int i=0;i<m;i++){
                if(i==0) min = q.top();
                if(i == m-1) max = q.top();
                int top = q.top();
                cnt+=top;
                q.pop();
            }
            ans += (max-min);
            q.push(cnt);
        }
        
    }
    cout<<q.top()<<endl<<ans<<endl;
}