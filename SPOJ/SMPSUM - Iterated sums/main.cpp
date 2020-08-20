#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,total=0;
    cin >> a >> b;

    for(int i=a; i<=b; i++) total += (i*i);

    cout << total << endl;

    return 0;
}
