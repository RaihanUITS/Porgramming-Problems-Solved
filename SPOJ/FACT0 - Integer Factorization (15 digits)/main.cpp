#include <bits/stdc++.h>
#define ll long long
using namespace std;

void factorize(ll n){
    ll cnt=0;

    if(n%2==0){
        while(n%2==0){
            cnt++;
            n=n/2;
        }
    }

    if(cnt) printf("2^%lld ",cnt);
    cnt=0;

    for(ll i=3;i*i<=n;i+=2){
        if(n%i==0){
            while(n%i==0){
                cnt++;
                n=n/i;
            }
        }

        if(cnt) printf("%lld^%lld ",i,cnt);
        cnt=0;
    }

    if(n!=1) printf("%lld^1",n);

    cout << endl;

}

int main()
{
    ll n;

    while(cin >> n){
        if(n==0) break;

        factorize(n);
    }
    return 0;
}
