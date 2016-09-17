#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int N,c=1;
    while(cin>>N)
    {
        if(N<=0) break;
        int i=0;
        int power=1;
        while(power<N)
        {
            power=pow(2,++i);
        }
        printf("Case %d: %d\n",c++,i);

    }

    return 0;
}
