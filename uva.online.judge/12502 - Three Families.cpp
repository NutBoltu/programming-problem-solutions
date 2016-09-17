#include<cstdio>

int main()
{
    int x,y,z,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d",&x,&y,&z);
        printf("%d\n",z*(2*x-y)/(x+y));

    }

    return 0;
}
