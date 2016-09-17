#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int T,a,b,c;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>a>>b>>c;
        if((a>b && a<c)|| (a<b && a>c)) printf("Case %d: %d\n",i,a);
        else if((b>a && b<c)|| (b<a && b>c)) printf("Case %d: %d\n",i,b);
        else if((c>a && c<b)|| (c<a && c>b)) printf("Case %d: %d\n",i,c);
    }
    return 0;
}
