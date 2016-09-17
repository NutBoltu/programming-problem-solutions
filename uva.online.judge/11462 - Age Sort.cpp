#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int n,value,age[101];
    while(true)
    {
        scanf("%d",&n);
        if(!n) break;
        memset(age,0,sizeof(age));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&value);
            age[value]++;
        }
        bool frstval=true;
        for(int i=1;i<=100;i++)
        {
            while(age[i]--)
            {
                   if(frstval)
                   {
                       printf("%d",i);
                       frstval=false;
                   }
                   else printf(" %d",i);
            }
        }
        printf("\n");


    }
    return 0;
}
