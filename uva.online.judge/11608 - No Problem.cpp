#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int total,p[13],r[13],c=1;

    while(cin>>total)
    {
        if(total<0) break;
        p[0]=0;
        for(int i=1;i<=12;i++) cin>>p[i];
        for(int i=1;i<=12;i++) cin>>r[i];
        printf("Case %d:\n",c++);
        for(int i=1;i<=12;i++)
        {
            total+=p[i-1];
            if(total>=r[i])
            {
                total-=r[i];
                printf("No problem! :D\n");
            }
            else printf("No problem. :(\n");

        }


    }


    return 0;
}
