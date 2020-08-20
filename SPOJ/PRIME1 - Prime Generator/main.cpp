#include <bits/stdc++.h>
#define maxi 32000
#define ll long long
using namespace std;

bool status[maxi];
vector <int> primes;

void sieve(){
    for(int i=3;i*i<=maxi;i+=2){
        if(status[i]==0){
            for(int j=i*i;j<=maxi;j+=i) status[j]=1;
        }
    }
    primes.push_back(2);
    for(int i=3;i<=maxi;i+=2){
        if(status[i]==0) primes.push_back(i);
    }
}

void segSieve(ll l, ll r){
    int len=(r-l+1);
    bool isPrime[len];
    memset(isPrime,0,sizeof isPrime);

    if(l==1) isPrime[0]=1;
    for(int i=0;primes[i]*primes[i]<=r; i++){
        int currentPrime=primes[i];
        ll base=(l/currentPrime)*currentPrime;

        if(base<l)base+=currentPrime;
        for(ll j=base; j<=r;j+=currentPrime){
            isPrime[j-l]=1;
        }
        if(base==currentPrime) isPrime[base-l]=0;
    }

    for(int i=0;i<r-l+1;i++){
        if(isPrime[i]==0) cout << i+l << endl;
    }
    puts("");
}


int main(){
    sieve();

    int t; cin >> t;

    while(t--){
        ll a,b;
        cin >> a >> b;
        segSieve(a,b);

    }
    return 0;
}
