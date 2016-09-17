#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char input[300];
int OriginalStack[31],Stack[31],numofPanCakes,flipList[31];
int GenerateStack()
{
    int nopc =1;
    char *ch;
    ch = strtok(input," ");

    while(ch!=NULL)
    {
        OriginalStack[nopc] = Stack[nopc] = atoi(ch);
        nopc++;
        ch = strtok(NULL," ");
    }
    return nopc;
}
int maxElement(int lowerBound,int upperBound)
{
    int max = 0,pos = -1;
    for(int i=lowerBound;i<=upperBound;i++)
    {
        if(Stack[i]>max)
        {
            max = Stack[i];
            pos = i;
        }
    }
    return pos;
}

void Flip(int bound)
{
    int temp ;
    for(int i=1;i<=bound/2;i++)
    {
        temp = Stack[i];
        Stack[i] = Stack[bound+1-i];
        Stack[bound+1-i] = temp;
    }

}
int main()
{
    int noPC,pos,noOfFlip;
    while(gets(input))
    {
        noPC = numofPanCakes = GenerateStack()-1;
        noOfFlip=0;
        while(noPC>1)
        {
            pos = maxElement(1,noPC);
            if(pos == 1)
            {
                Flip(noPC);
                flipList[noOfFlip++]=numofPanCakes+1-noPC;

            }
            else if(pos<noPC)
            {
                Flip(pos);
                flipList[noOfFlip++]=numofPanCakes-pos+1;
                Flip(noPC);
                flipList[noOfFlip++]=numofPanCakes-noPC+1;
            }
            noPC --;

        }
        flipList[noOfFlip++]=0;
        for(int i=1;i<numofPanCakes;i++)
        {
            cout<<OriginalStack[i]<<" ";
        }
        cout<<OriginalStack[numofPanCakes]<<endl;
        for(int i=0;i<noOfFlip-1;i++)
        {
            cout<<flipList[i]<<" ";
        }
        cout<<flipList[noOfFlip-1]<<endl;



    }
    return 0;
}
