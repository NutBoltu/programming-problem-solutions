#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int N,data;
    while(true)
    {
        cin>>N;
        if(N==0) break;
        bool space=false;
        for(int i=0;i<N;i++)
        {
            cin>>data;

            if(data!=0)
            {
                if(space)printf(" ");
                printf("%d",data);
                space=true;
            }

        }
         if(!space) printf("%d",data);
                printf("\n");


    }





    return 0;
}
