#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int T;
    char url[11][101];
    int rel[11];
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int max=-99999;
        for(int j=0;j<10;j++)
        {
            cin>>url[j]>>rel[j];
            if(rel[j]>max) max=rel[j];
        }
        printf("Case #%d:\n",i);
        for(int j=0;j<10;j++)
        {
            if(max==rel[j]) cout<<url[j]<<endl;
        }


    }
    return 0;
}
