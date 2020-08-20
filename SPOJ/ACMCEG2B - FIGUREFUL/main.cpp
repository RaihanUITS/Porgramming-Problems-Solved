#include <bits/stdc++.h>
#define ll long long
#define PR 10000019
#define h(a, b) ((a*PR) + b)

using namespace std;

int main()
{
    int n,a,b;
    cin >> n;

    string s;
    map<ll,string> mp;

    while(n--){
        cin >> a >> b >> s;
        mp[h(a,b)]=s;
    }

    int t;
    cin >> t;

    while(t--){
        cin >> a >> b;

        cout << mp[h(a,b)] << endl;
    }

    return 0;
}
