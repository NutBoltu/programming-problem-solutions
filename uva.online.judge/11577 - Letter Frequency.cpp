#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;
int main ()
{
    int t;
    char str[201];
    cin>>t;
    getchar();
    while(t--)
    {

      // memset(freq,0,26);
        int freq[26] ={0};
       int Max =-200;
       gets(str);
        for(int i=0;i<strlen(str);i++)
        {
            str[i]=tolower(str[i]);
            if(str[i]>=97 && str[i]<=122)
            {
                freq[str[i]-97]++;
                if( freq[str[i]-97]>Max)  Max = freq[str[i]-97];
            }


        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]==Max) printf("%c",97+i);
        }
        printf("\n");


    }

    return 0;
}
