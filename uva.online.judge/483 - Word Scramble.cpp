#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
char p[1000],result[1000];

int main()
{
    int length,j,c;
    char  word[800];
    while(gets(p))
    {
        length = strlen(p);
        j =-1;
        for(int i=0;i<=length;i++)
        {
            if(p[i]!=' ' && p[i]!='\0') word[++j] = p[i];
            else
            {

                c = -1;
                while(j>=0) result[++c]= word[j--];

                if(p[i] == ' ') result[++c]= ' ';
                else result[++c]='\n';
                 result[++c]='\0';
                cout<<result;
                word[j] = '\0';
            }
        }

    }

    return 0;
}



