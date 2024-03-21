#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) cin>>a[i][j];
        int max_hang=0,max_cot=0;
        vector<int> vh,vc;
        for(int i=0;i<n;i++){
            int sum_hang=0;
            for(int j=0;j<n;j++){
                sum_hang+=a[i][j];
            }
            vh.push_back(sum_hang);
            if(sum_hang > max_hang) max_hang = sum_hang;
        }
        for(int j=0;j<n;j++){
            int sum_cot=0;
            for(int i=0;i<n;i++){
                sum_cot+=a[i][j];
            }
            vc.push_back(sum_cot);
            if(sum_cot > max_cot) max_cot = sum_cot;
        }
        int cnt=0;
        if(max_hang > max_cot){
            for(auto it:vc){
                cnt+=(max_hang-it);
            }
        }else{
            for(auto it:vh){
                cnt+=(max_cot-it);
            }
        }
        cout<<cnt<<endl;
    }
}