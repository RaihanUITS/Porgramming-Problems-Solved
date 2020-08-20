#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,a,b,c,d,e,n,f;
    cin >> N;
    while(N--){
        int sum1=0,sum2=0,sum=0;
        cin >> a >> b;
        for(int i=1;i>0;i*=10){
            if(a/i>=1 && a/i<10){
               c=i;
               //cout << c << endl;
               break;
            }
        }
        for(int j=1;j>0;j*=10){
            if(b/j>=1 && b/j<10){
                d=j;
                //cout << d << endl;
                break;
            }
        }
        while(a!=0){
            n=a%10;
            a=a/10;
            sum1+=(n*c);
            //cout << sum1 << endl;
            c=c/10;
            //cout << c << endl;
        }
        while(b!=0){
            n=b%10;
            b=b/10;
            sum2+=(n*d);
            d=d/10;
        }
        e=sum1+sum2;
        for(int k=1;k>0;k*=10){
            if(e/k>=1 && e/k<10){
                f=k;
                //cout << d << endl;
                break;
            }
        }
        while(e!=0){
            n=e%10;
            e=e/10;
            sum+=(n*f);
            f=f/10;
        }
        cout << sum << endl;
    }
    return 0;
}
