#include <bits/stdc++.h>
#define mx 100010
using namespace std;

int arr[mx];

int main()
{
    int n,q,x,y;
    char ch;

    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> arr[i];

    cin >> q;

    while(q--)
    {
        cin >> ch;

        if(ch=='U')
        {
            cin >> x >> y;

            arr[x]=y;
        }
        else if(ch=='Q')
        {
            cin >> x >> y;

            priority_queue <int> q;

            for(int i=x;i<=y;i++) q.push(arr[i]);

            int value=q.top();
            q.pop();
            value+=q.top();

            cout << value << endl;
        }
    }
    return 0;
}
