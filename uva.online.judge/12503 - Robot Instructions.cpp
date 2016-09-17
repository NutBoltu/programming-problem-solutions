#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int instruction[101],T,numofins,ins;
    char str[15];
    cin>>T;
    while(T--)
    {
        cin>>numofins;
        int p=0;
        for(int i=1;i<=numofins;i++)
        {
             cin>>str;

            if(str[0]=='L')
            {
              instruction[i]=-1;
              p+=instruction[i];
            }
            else if(str[0]=='R')
            {
                instruction[i]=1;
                p+=instruction[i];
            }
            else if(str[0]=='S')
            {
                 int temp;
                 cin>>str>>temp;
                 instruction[i]=instruction[temp];
                 p+=instruction[i];
            }
        }
        cout<<p<<endl;

    }
    return 0;
}

