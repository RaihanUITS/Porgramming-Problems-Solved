#include <bits/stdc++.h>
using namespace std;

struct nayok{
    string name;
    int a,v,s;
};

bool cmp(nayok x, nayok y){
    if(x.a>y.a) return true;
    else if(x.a==y.a){
        if(x.v>y.v) return true;
        else if(x.v==y.v){
            if(x.s<y.s) return true;
            else if(x.s==y.s){
                if(x.name<y.name) return true;
            }
        }
    }

    return false;
}

int main()
{
    int n,a,v,s; cin >> n;
    string name;

    nayok arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i].name >> arr[i].a >> arr[i].v >> arr[i].s;

    sort(arr,arr+n,cmp);

    for(int i=0;i<n;i++)
        cout << arr[i].name << endl;

    return 0;
}
