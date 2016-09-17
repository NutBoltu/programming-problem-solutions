#include<iostream>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        int m=1,ones=1;
        while(m<N)
        {
            m=m*10+1;
            ones++;
        }
        while((m%N))
        {

            m=(m%N)*10+1;
            ones++;
        }
        cout<<ones<<endl;
    }
    return 0;
}
