#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
using namespace std;
long int X[1000],C[1000];
int numofC,numofX;
void Convert(char line[],int T)
{
        char * pch;
        long int i;
        pch = strtok (line," ");

        while (pch != NULL)
        {
            i= strtol(pch,NULL,0);
            if(T==0) C[numofC++]=i;
            else if(T==1) X[numofX++]=i;
            pch = strtok (NULL, " ");
        }

}


int main()
{
    char line[1000];
    long int sum;
    while(gets(line))
    {
        numofC=numofX=0;
        Convert(line,0);
        gets(line);
        Convert(line,1);

        bool space=false;
        for(int i=0;i<numofX;i++)
        {
            sum=0;
            int k=numofC-1;
            for(int j=0;j<numofC;j++,k--) sum+=C[j]*pow(X[i],k);

            if(space) printf(" ");
            space=true;
            printf("%ld",sum);

        }
         printf("\n");

    }

    return 0;
}
