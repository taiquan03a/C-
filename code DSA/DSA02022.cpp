#include<bits/stdc++.h>

using namespace std;

string s = "2000";
char a[2] = {'0', '2'};
vector<string> d, m, y;

void Try(int i)
{
    for(int j = 0; j < 2; ++j)
    {
        s[i] = a[j];
        if(i == 3) y.push_back(s);
        else Try(i + 1);
    }
}

int main()
{
    d.push_back("02");
    d.push_back("20");
    d.push_back("22");
    m.push_back("02");
    Try(1);
    for(string &i : d) for(string &j : y) cout << i << "/02/" << j << endl;
    return 0;
}

