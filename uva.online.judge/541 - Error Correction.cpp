#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int N,Mat[101][101];

    while(cin>>N)
    {
        if(N==0) break;
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++) cin>>Mat[i][j];

        int row=-1,col=-1;
        /*for rows*/
        int oddrows=0;
        for(int i=0;i<N;i++)
        {
            int numofone=0;
            for(int j=0;j<N;j++)
            {
                if(Mat[i][j]==1)numofone++;
            }
            if(numofone%2!=0)
            {
                row=i;
                oddrows++;
            }
        }
        /*for col*/
        int oddcols=0;
        for(int j=0;j<N;j++)
        {
            int numofone=0;
            for(int i=0;i<N;i++)
            {
                if(Mat[i][j]==1)numofone++;
            }
            if(numofone%2!=0)
            {
                col=j;
                oddcols++;
            }
        }
        if(row==-1 && col ==-1) printf("OK\n");
        else if(oddrows==1 && oddcols==1) printf("Change bit (%d,%d)\n",row+1,col+1);
        else printf("Corrupt\n");


    }



}
