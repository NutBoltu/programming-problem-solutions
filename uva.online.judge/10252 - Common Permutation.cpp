#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char a[1010],b[1010];
    int freqa[30],freqb[30];
    while (cin.getline(a, 1010).getline(b, 1010))
    {

        for(int i=0;i<26;i++) freqa[i]=freqb[i]=0;
        for(int i=0;i<strlen(a);i++)
        {
            int temp= (int)a[i];
            if(temp>=97 &&temp<=122 )freqa[temp-97]++;
        }
        for(int i=0;i<strlen(b);i++)
        {
            int temp= (int)b[i];
            if(temp>=97 &&temp<=122 ) freqb[temp-97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(freqa[i]!=0 && freqb[i]!=0)
            {

                int Min=min(freqa[i],freqb[i]);
                for(int j=0;j<Min;j++) printf("%c",i+97);
            }
        }
    printf("\n");
    }
    return 0;
}
