#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int T,a,b;

    T=1;
    while(true)
    {
        cin>>a>>b;
        if(!a && !b) break;
        int res=0,mod=0;;
        if(b)
        {
            res=a/b;
            mod=a%b;
        }

        if(res>26)printf("Case %d: impossible\n",T);
        else
        {
            if(!mod)printf("Case %d: %d\n",T,res-1);
            else printf("Case %d: %d\n",T,res);
        }
        T++;
    }
    return 0;
}
