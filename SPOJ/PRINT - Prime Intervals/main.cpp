#include <bits/stdc++.h>
#define mx 100001
#define ll long long
using namespace std;

vector <int> primes;

void sieve(){
    bool isPrime[mx];
    for(int i=0;i<mx;i++) isPrime[i]=true;
    isPrime[0]=isPrime[1]=false;

    for(int i=4;i<mx;i+=2) isPrime[i]=false;
    for(int i=3;i*i<mx;i+=2){
        if(isPrime[i]){
            for(int j=i*i;j<mx;j+=i) isPrime[j]=false;
        }
    }

    primes.push_back(2);
    for(int i=3;i<mx;i+=2){
        if(isPrime[i]) primes.push_back(i);
    }

}

void segSeive(ll l, ll r){
    bool isPrime[(r-l)+1];
    for(int i=0;i<=(r-l);i++) isPrime[i]=true;

    for(int i=0;primes[i]*(ll)primes[i]<=r;i++){
        int currentPrime=primes[i];
        ll base=(l/currentPrime)*currentPrime;
        if(base<l) base+=currentPrime;

        for(ll j=base;j<=r;j+=currentPrime){
            isPrime[j-l]=false;
        }
        if(base==currentPrime) isPrime[base-l]=true;
    }

    for(int i=0;i<=(r-l);i++){
        if(isPrime[i]==true) printf("%lld\n",(ll)(i+l));
    }
}

int main(){

    sieve();

    int t;
    scanf("%d",&t);

    while(t--){
        ll l,r;
        scanf("%lld %lld",&l,&r);

        segSeive(l,r);
    }

    return 0;
}
