#include<cstdio>

int main()
{
    int a,b,c,d,e,Result;
    while(true)
    {
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
        if(!a && !b && !c && !d && !e) break;

        Result= a*b*c*d*d*e*e;
        printf("%d\n",Result);
    }

    return 0;
}
