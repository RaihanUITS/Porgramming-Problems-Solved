#include <bits/stdc++.h>
using namespace std;

struct stone{
    double xaxis,yaxis;
};

int main()
{
    int test,n;
    cin >> test;

    while(test--){
        cin >> n;
        stone arr[n+1];

        for(int i=0;i<n;i++)
            cin >> arr[i].xaxis >> arr[i].yaxis;

        arr[n].xaxis=arr[0].xaxis;
        arr[n].yaxis=arr[0].yaxis;

        double X=0,Y=0,area=0,value;

        for(int i=0;i<n;i++)
        {
            value=(arr[i].xaxis*arr[i+1].yaxis)-(arr[i+1].xaxis*arr[i].yaxis);
            area+=value/2;
            X+=(arr[i].xaxis+arr[i+1].xaxis)*value;
            Y+=(arr[i].yaxis+arr[i+1].yaxis)*value;
        }

        X=X/6.0/area;
        Y=Y/6.0/area;

        if(X<0.005 && X>0.0) X=0;
        if(X>-0.005 && X<0.0) X=0;

        if(Y<0.005 && Y>0.0) Y=0;
        if(Y>-0.005 && Y<0.0) Y=0;

        if(X==0) printf("0.00 ");
        else printf("%0.2lf ",X);
        if(Y==0) printf("0.00\n");
        else printf("%0.2lf\n",Y);

        //printf("%0.2lf %0.2lf\n",X,Y);
    }
    return 0;
}
