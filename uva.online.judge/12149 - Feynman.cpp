#include<iostream>
using namespace std;
int main()
{
    int N,Sum;
    while(cin>>N)
    {
        if(!N) break;
        Sum=0;
        for(int i=1;i<=N;i++) Sum+=i*i;
        cout<<Sum<<endl;

    }
    return 0;
}
