#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int Cycle[201][201];
int numofpos[201];

void findCycle(int N,int S[])
{
    int find[201],count,init;


    for(int j=0;j<N;j++)
    {
         init=j;
        for(int i=0;i<N;i++) find[i]=-1;
        for(count=0;count<N;count++)
        {
                Cycle[j][count]=S[init];
                init=S[init];
                if(!find[init]) break;
                else find[init]=0;

        }
        numofpos[j]=count;
    }

}
int main()
{

    int N,k;
    int Seq[201];
    char str[201],line[201];

    //bool bline=false;

    while(cin>>N)
    {
        if(!N) break;
        //if(bline) cout<<endl;
      //  bline=true;


        for(int i=0;i<N;i++) cin>>Seq[i],Seq[i]--;

        findCycle(N,Seq);

        while(cin>>k)
        {
            if(!k) break;
            gets(str);

            int c=strlen(str)-1;
            memcpy(line, &str[1],c);
            for(int i=c;i<N;i++) line[i]=' ';
            line[N]='\0';
            for(int i=0;i<N;i++)
            {
                int fpos = Cycle[i][(k-1)%numofpos[i]];
               str[fpos]=line[i];
            }
            str[N]='\0';
           cout<<str<<endl;


        }
        cout<<endl;

    }

    return 0;
}
