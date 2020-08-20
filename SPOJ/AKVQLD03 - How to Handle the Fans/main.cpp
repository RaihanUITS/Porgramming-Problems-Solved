#include <bits/stdc++.h>
#define mx 1000010
using namespace std;

int tree[mx*3];

int queryNode(int node, int b, int e, int i, int j)  //function to run the query for the range
{
    if (i > e || j < b)
        return 0; //বাইরে চলে গিয়েছে
    if (b >= i && e <= j)
        return tree[node]; //রিলেভেন্ট সেগমেন্ট
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = queryNode(Left, b, mid, i, j);
    int p2 = queryNode(Right, mid + 1, e, i, j);
    return p1 + p2; //বাম এবং ডান পাশের যোগফল
}


void updateNode(int node, int b, int e, int i, int newvalue) // function to update any value in a node
{
    if (i > e || i < b)
        return; //বাইরে চলে গিয়েছে
    if (b >= i && e <= i) { //রিলেভেন্ট সেগমেন্ট
        tree[node] += newvalue;
        return;
    }
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    updateNode(Left, b, mid, i, newvalue);
    updateNode(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}


int main()
{
    int nodes,query,x,y;
    string command;

    cin >> nodes >> query;

    for(int i=0; i<mx*3; i++) tree[i]=0;

    while(query--)
    {
        cin >> command;

        if(command=="find")
        {
            cin >> x >> y;

            cout << queryNode(1,1,nodes,x,y) << endl;
        }
        else if(command=="add")
        {
            cin >> x >> y;

            updateNode(1,1,nodes,x,y);


        }
    }

    return 0;
}
