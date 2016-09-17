#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    float  H,M,angle;
    while(scanf("%f:%f",&H,&M)==2)
    {
        if(!H && !M) break;
        H=H*30+(M/60)*30;
        M=M*6;
        angle=H-M;
        if(angle<0) angle*=-1;
        if (angle>180) angle=360-angle;
        printf("%.3f\n",angle);

    }

    return 0;
}

