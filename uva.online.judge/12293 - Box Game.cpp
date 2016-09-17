#include<iostream>
using namespace std;
int main()
{
    int N,a;
    while(cin>>N &&N)
    {
        a = 1;
        while(a<N)
        {
            a*=2;
            a++;
        }
        if(a == N ) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;

    }


    return 0 ;
}
