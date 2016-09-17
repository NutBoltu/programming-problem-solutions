#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int T,N,K,P;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>N>>K>>P;
        int res= (K+P)%N;
        if(!res) printf("Case %d: %d\n",i,N);
        else printf("Case %d: %d\n",i,res);
    }
    return 0;
}
