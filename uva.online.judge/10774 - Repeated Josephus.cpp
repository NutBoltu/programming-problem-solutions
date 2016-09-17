#include<iostream>
#include<cstdio>
using namespace std;
int Joseph(int N,int k)
{
    if(N==1) return 1;
    return ((Joseph(N-1,k)+k-1)%N+1) ;

}
int main()
{
    int T;
    cin>>T;

    for(int c=1;c<=T;c++)
    {
        int N;
        cin>>N;
        int survivor=N;
        N=0;
        int repetation=-1;
        while(survivor!=N)
        {
           repetation++;
           N=survivor;
           survivor=Joseph(N,2);

        }
        printf("Case %d: %d %d\n",c,repetation,survivor);




    }


    return 0;
}
