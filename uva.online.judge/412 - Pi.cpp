#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int GCD(int p,int q)
{
    if(q>p) return GCD(q,p);
    if(q==0) return p;
    return GCD(q,p%q);
}

int main()
{
    int num[52];

    int N;
    while(cin>>N)
    {
        if(N==0) break;
        int pair=0,primepair=0;
        for(int i=0;i<N;i++) cin>>num[i];

        for(int i=0;i<N-1;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                pair++;
                if(GCD(num[i],num[j])==1) primepair++;
            }
        }
        if(primepair==0) printf("No estimate for this data set.\n");
        else
        {
            double ans = sqrt(6.0*(pair*1.0)/primepair);
            printf("%.6lf\n",ans);

        }

    }

    return 0;
}
