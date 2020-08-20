#include <bits/stdc++.h>
#define mx 1000007

using namespace std;

int arr[mx];
bool status[mx];
int sq=sqrt(mx);

void sieve(){
    for(int i=4;i<=mx;i+=2) status[i]=1;
    for(int i=3;i<=sq;i+=2){
        if(status[i]==0){
            for(int j=i*i;j<=mx;j+=i) status[j]=1;
        }
    }
}

int main(){
    int t,n; cin >> t;

    for(int i=1;i<=t;i++){
        cin >> n;
        sieve();
        for(int j=1;j<=n;j++){
            if(status[j]==0) cout << j << endl;
        }

        cout << endl;
    }

    return 0;
}
