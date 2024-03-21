#include<bits/stdc++.h>

using namespace std;

bool check1(char c){
	return (c == 'A' || c == 'E');
}

bool check2(string s){
    for(int i = 0; i < s.size(); ++i)
    {
        if(check1(s[i]))
        {
            if(i == 0 || i == s.size() - 1) continue;
            if(!check1(s[i - 1]) && !check1(s[i + 1])) return 0;
        }
    }
    return 1;
}

int main(){
    string s = "ABC";
    char c;
    cin >> c;
	for(char j = 'D'; j <= c; ++j) s += j;
    do
    {
        if(check2(s)) cout << s << endl;
    }
    while(next_permutation(s.begin(),s.end()));
}
