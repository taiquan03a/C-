#include<bits/stdc++.h>

using namespace std;

void show(queue<string> q){
    while(q.size()){
        cout<<q.front()<<' ';
        q.pop();
    }
    cout<<endl;
}

int main(){
    queue<string> q1;
    queue<string> q2;
    int n; cin>>n;
    q1.push("2357");
    q2.push("2357");
    while(q1.front().size() <= n){
        string top = q1.front();
        q1.pop();
        q2.push(top + "2");
        q2.push(top + "3");
        q2.push(top + "5");
        q1.push(top + "7");
        q1.push(top + "2");
        q1.push(top + "3");
        q1.push(top + "5");
        q1.push(top + "7");
    }

    while(q2.front().size() <= n){
        string str = q2.front();
        q2.pop();
        sort(str.begin(),str.end());
        do{
            if(str[str.size() - 1] != '2') cout<<str<<endl;
        }while(next_permutation(str.begin(),str.end()));
    }
}
