#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k; cin >> t;

    while(t--){
       cin >> n >> k;
       vector <int> candies;

       int x;
       while(n--){
            cin >> x;
            candies.push_back(x);
       }

       int len = candies.size(),mx;
       for(int i=-1,m=k-1;i<len,m<len;i++,m++){
            mx=candies[i+1];
            for(int j=i+1;j<=m;j++){
                if(candies[j]>mx) mx=candies[j];
            }
            cout << mx << " ";
       }

       cout << endl;
    }

    return 0;
}
