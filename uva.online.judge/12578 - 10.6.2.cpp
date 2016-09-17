#include<cstdio>
#include<cmath>
int main()
{
    int T,L;
    double redArea,greenArea;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&L);
        double  r=L/5.0;
        double  W = L*6.0/10;
        redArea=acos(-1)*pow(r,2);
        greenArea=L*W-redArea;
        printf("%.2lf %.2lf\n",redArea,greenArea);
    }

    return 0;
}
