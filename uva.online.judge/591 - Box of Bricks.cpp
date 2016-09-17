#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int N,H[101];
   // bool line=false;
    int Set=1;
    while(cin>>N)
    {
        if(N==0) break;
       // if(line) printf("\n");
       // line=true;
        int sum=0;
        for(int i=0;i<N;i++)
        {
            cin>>H[i];
            sum+=H[i];
        }
        int avg = sum/N;
        int numofmove=0;
        for (int i=0;i<N;i++) numofmove+=abs(H[i]-avg);
        numofmove/=2;
        printf("Set #%d\n",Set++);
        printf("The minimum number of moves is %d.\n\n",numofmove);




    }


    return 0;
}
