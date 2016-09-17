#include<cstdio>
int main()
{
    int T,e,f,c;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d",&e,&f,&c);
        int N=e+f;
        int newsoda=0;
        while(N>=c)
        {   newsoda++;
            N=N-c+1;

        }
        printf("%d\n",newsoda);
    }
    return 0;
}
