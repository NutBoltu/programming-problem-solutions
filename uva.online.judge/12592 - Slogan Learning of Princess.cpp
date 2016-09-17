#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    string fLine[21];
    string sLine[21];
    int N,Q;
    while(cin>>N)
    {
       getchar();
        for(int i=0;i<N;i++)
        {
            getline(cin,fLine[i]);
            getline(cin,sLine[i]);

        }

        cin>>Q;
        string test;
        getchar();
        for(int i=0;i<Q;i++)
        {
            getline(cin,test);
            for(int j=0;j<N;j++)
            {
                if(test.compare(fLine[j])==0)
                {
                    cout<<sLine[j]<<endl;
                    break;
                }
            }

        }
    }
    return 0;
}
