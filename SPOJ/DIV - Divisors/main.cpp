#include <bits/stdc++.h>
#define maxi 1000000
using namespace std;

bool status[maxi+7];
int sq=sqrt(maxi);
vector <int> primes;
vector <int> nonPrimes;

void sieve(){
    for(int i=4;i<=maxi;i+=2) status[i]=1;
    for(int i=3;i<=sq;i+=2){
        for(int j=i*i;j<=maxi;j+=i) status[j]=1;
    }
    primes.push_back(2);
    for(int i=3;i<=maxi;i++){
        if(status[i]==0) primes.push_back(i);
        else nonPrimes.push_back(i);
    }
}

void divisor(){
    int len=nonPrimes.size();
    int len2=primes.size();
    int pos=0;
    for(int i=910000;i<len;i++){
        int res=0;
        int sqrti=sqrt(nonPrimes[i]);

        for(int j=1;j<sqrti;j++){
            if(nonPrimes[i]%j==0) res+=2;
        }

        if(nonPrimes[i]%sqrti==0){
            if(sqrti*sqrti==nonPrimes[i]) res++;
            else res+=2;
        }

        //cout << res << " " << nonPrimes[i] << endl;

        if(status[res]==1){
                for(int k=0;k<len2;k++){
                    if((res%primes[k])==0 && status[res/primes[k]]==0 && (res/primes[k])!=primes[k]){
                    pos++;
                    if(pos%9==0) cout << nonPrimes[i] << endl;
                    //cout << nonPrimes[i] << endl;
                    break;
                    }
                }
        }
    }
}

int main()
{
    sieve();
    divisor();
    return 0;
}
