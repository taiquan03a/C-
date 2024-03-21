#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    char A[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
    char B[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
    while(t--){
        int md;
        cin>>md;
        double sum=0;
        char M[15];
        for(int i=0;i<15;i++){
            cin>>M[i];
        }
        if(md==101){
            for(int i=0;i<15;i++){
                if(A[i]==M[i]) sum+=(double)2/3;
            }
        }else{
            for(int i=0;i<15;i++){
                if(B[i]==M[i]) sum+=(double)2/3;
            }
        }
        cout<<setprecision(2)<<fixed<<sum<<endl;
        

    }
}