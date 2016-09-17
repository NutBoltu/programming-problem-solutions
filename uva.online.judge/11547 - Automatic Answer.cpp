#include<stdio.h>
int main()
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        long int n;
        scanf("%ld",&n);
        n=n*315+36962;
        n/=10;
        n%=10;
        if(n<0) n*=-1;
        printf("%ld\n",n);


    }


}
