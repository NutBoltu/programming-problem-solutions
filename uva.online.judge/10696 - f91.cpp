#include<stdio.h>

int main()
{
    long int N;
    while(true)
    {
        scanf("%ld",&N);
        if(N==0) break;
        if(N<=100) printf("f91(%ld) = 91\n",N);
        else printf("f91(%ld) = %ld\n",N,N-10);

    }



}
