#include<iostream>
#include<cstdio>
#include<cmath>

#define PI acos(-1)

using namespace std;

int main()
{
    int D,V;
    double res;
    while(cin>>D>>V)
    {
        if(!D && !V) break;

        res= pow(pow(D,3)- 6*V/PI,1.0/3);
        printf("%.3lf\n",res);
    }
    return 0;
}
