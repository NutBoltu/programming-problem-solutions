#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int N;
    char sample[100],test[100];

    cin>>N;
    while(N--)
    {
        scanf("%s",sample);
        scanf("%s",test);

        int slen=strlen(sample);
        int tlen=strlen(test);
        if(slen==tlen)
        {
            bool yes=true;
            for(int i=0;i<slen;i++)
            {
                if(sample[i]=='a'|| sample[i]=='e'||sample[i]=='i'|| sample[i]=='o'|| sample[i]=='u')
                {
                    if(test[i]=='a'|| test[i]=='e'||test[i]=='i'|| test[i]=='o'|| test[i]=='u')
                    continue;
                    else
                    {
                        yes=false;
                        break;
                    }

                }

                if(sample[i]!= test[i])
                {
                    yes=false;
                    break;
                }

            }
            if(yes)  cout<<"Yes"<<endl;
            else cout<<"No"<<endl;


        }
        else cout<<"No"<<endl;

    }

    return 0;
}
