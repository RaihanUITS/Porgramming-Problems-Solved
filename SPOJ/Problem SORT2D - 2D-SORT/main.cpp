#include <bits/stdc++.h>
#define II pair<int,int>
using namespace std;

bool comp (II a, II b){
    if(a.first<b.first) return true;
    else if(a.first==b.first && a.second > b.second) return true;
    return false;
}

//bool cmp(II a, II b){
//    if(a.first < b.first)
//        return true;
//    else if(a.first == b.first && a.second > b.second)
//        return true;
//    return false;
//}


int main()
{
    int t,n,x,y; cin >> t;

    while(t--){
        scanf("%d",&n);
        vector <II> v;
        while(n--){
            scanf("%d %d",&x,&y);
            v.push_back(II(x,y));
        }

        sort(v.begin(),v.end(),comp);

        int len = v.size();
        for(int i=0;i<len;i++){
            printf("%d %d\n",v[i].first,v[i].second);
        }
    }

    return 0;
}
