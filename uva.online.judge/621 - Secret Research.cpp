#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
    int N,i,len;
    char Input[33000];

    cin>>N;
    while(N--)
    {
        cin>>Input;
        i=atoi(Input);
        len=strlen(Input);

        if(i==1 || i==4 || i==78) printf("+\n");
        else if(Input[len-2]=='3' && Input[len-1]=='5') printf("-\n");
        else if(Input[0]=='9' && Input[len-1]=='4') printf("*\n");
        else if(Input[0]=='1' && Input[1]=='9' && Input[2]=='0') printf("?\n");



    }

    return 0;
}
