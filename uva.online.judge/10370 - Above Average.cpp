#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int t;
    float num[1001],sum,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
            sum+=num[i];

        }
        sum/=n;
        float a=0;
        for(int i=0;i<n;i++)
        {
            if(num[i]>sum) a++;
        }

        printf("%.3f%%\n",a*100/n);
    }
}
