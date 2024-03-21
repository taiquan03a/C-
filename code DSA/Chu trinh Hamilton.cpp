#include<bits/stdc++.h>
#define max 20
using namespace std;
int a[max][max];
int b[max], c[max];
int n;
 
void init()
{
    cin>>n; 
    for (int i=0; i < n; i++)
        for (int j=0; j < n; j++)
            cin>>a[i][j];
    for (int k=0; k < n; k++) b[k] = 0;
    c[0] = 0; b[0] = 1;
}
 
void showpath()
{
    for (int k=0; k < n; k++) cout<<c[k]+1<<" ";
    cout<<c[0]+1<<endl;
}
void Hamilton(int j)
{
    for (int k = 0; k < n; k++)
        if (b[k]==0 && a[c[j-1]][k])
        {
            b[k] = 1; c[j] = k;
            if (j==n-1)
            {
                if(a[c[j]][c[0]])showpath();
            }
            else Hamilton(j+1);
            b[k] = 0;
        }
}
 
int main()
{
    init();
    cout<<"Chu trinh Hamilton : "<<endl;
    Hamilton(1);
}
