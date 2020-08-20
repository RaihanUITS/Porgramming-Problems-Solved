#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,q,a,b;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> q;
    while(q--){
        int sum=0;
        cin >> a >> b;
        for(int j=a;j<=b;j++){
            sum+=arr[j];
        }
        cout << sum << endl;
    }
    return 0;
}
