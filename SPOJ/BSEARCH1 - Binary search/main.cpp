#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main()
{
    fastio();

    int n,query,number,value;
    map <int,int> mp;

    scanf("%d %d",&n, &query);

    for(int i=1; i<=n; i++){
        scanf("%d",&value);

        if(mp[value] == 0) mp[value] = i;

    }

    while(query--){
        scanf("%d",&number);

        if(mp[number] == 0) printf("-1\n");
        else printf("%d\n",mp[number]-1);

    }

    return 0;
}
