#include <bits/stdc++.h>
#define ll long long
using namespace std;

void divisorSum(int n){
    ll sum=1;

    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            sum+=i;
            if(i!=n/i) sum+=(n/i);
        }
    }

    printf("%lld\n",sum);
}

int main()
{
    int test,number;
    scanf("%d",&test);

    while(test--){
        scanf("%d",&number);

        if(number==1) printf("0\n");
        else divisorSum(number);
    }
    return 0;
}
