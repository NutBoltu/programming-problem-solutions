#include<iostream>

using namespace std;

int main()
{
    long long int a,b;
    int N;

    while(cin>>N)
    {
        if(N==0) break;
        a=0;
        b=1;
        for(int i=0;i<N;i++)
        {
           b+=a;
            a=b-a;
        }
        cout<<b<<endl;

    }


    return 0;

}

