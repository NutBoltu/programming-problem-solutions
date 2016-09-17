#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int T;
    char test[10];
    char one[]="one";
    char two[]="two";

        cin>>T;
        for(int i=0;i<T;i++)
        {
            cin>>test;
            int len=strlen(test);
            if(len==5) cout<<"3"<<endl;
            else
            {
                int mismatchone=0;
                for(int i=0;i<3;i++)
                {
                    if(test[i]!=one[i]) mismatchone++;
                }
                int mismatchtwo=0;
                for(int i=0;i<3;i++)
                {
                    if(test[i]!=two[i]) mismatchtwo++;
                }
                if(mismatchone<mismatchtwo) cout<<"1"<<endl;
                else cout<<"2"<<endl;

            }
        }


    return 0;


}

