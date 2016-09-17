#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,input,max;
    cin>>t;
    for(int c=1;c<=t;c++)
    {
        cin>>n;
        max=0;
        for(int i=0;i<n;i++)
        {
            cin>>input;
            if(input>max) max = input;
        }
        printf("Case %d: %d\n",c,max);
    }
    return 0;
}
