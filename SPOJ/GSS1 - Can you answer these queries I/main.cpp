#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 100;
int arr[maxn],seg[maxn*3];

void build(int node, int b, int e){
    if( b==e ){
        seg[node] = arr[b];
        return;
    }

    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;

    build( left, b, mid );
    build( right, mid+1, e );
    seg[node] = max( seg[left], seg[right] );
}

int query(int node, int b, int e, int i, int j){
    if( i>e || j<b ) return -1e7;
    if( i<=b && j>=e ) return seg[node];
    int left = node*2;
    int right = node*2+1;
    int mid = ( b + e )/2;
    int p1 = query( left, b, mid, i, j );
    int p2 = query( right, mid+1, e, i, j );
    return max( p1, p2 );
}

int main()
{
    int n; cin >> n;

    for(int i=1;i<=n;i++) cin >> arr[i];

    build( 1, 1, n );

    int q; cin >> q;

    int l,r;
    while(q--){
        cin >> l >> r;
        cout << query( 1, 1, n, l, r ) << endl;
    }

    return 0;
}
