#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    string a,b;
    int round;

    while(cin>>round)
    {
        if(round==-1) break;
        cin>>a;
        cin>>b;
        int match=0,stroke=0;
        for(int i=0;i<b.length();i++)
        {
                bool getthech=false;
                for(int j=0;j<a.length();j++)
                {
                    if(b[i]==a[j])
                    {

                        a[j]='0';
                        getthech=true;
                        match++;
                    }

                }
                if(!getthech) stroke++;
                if(stroke==7) break;
        }

        printf("Round %d\n",round);
        if(match==a.length()) printf("You win.\n");
        else if(stroke==7) printf("You lose.\n");
        else printf("You chickened out.\n");

    }

    return 0;

}



