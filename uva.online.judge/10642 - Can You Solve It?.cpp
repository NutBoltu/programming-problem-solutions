#include<iostream>
#include<cstdio>
using namespace std;
long long offset(long long m, long long n)
{
    return ((1+n+m)*(n+m)/2 +m);
}
int main()
{
    long long x1,y1,x2,y2;
    int t,Case=1;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        printf("Case %d: %lld\n",Case++,offset(x2,y2)-offset(x1,y1));
    }
    return 0;
}
