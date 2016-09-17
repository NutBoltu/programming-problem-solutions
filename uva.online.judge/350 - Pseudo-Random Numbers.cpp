#include<iostream>
using namespace std;

int main()
{
    long long int Z ,I ,M ,L;
    int length,seed,counter=1;

    while(cin>>Z>>I>>M>>L)
    {
        if(!Z && !I && !M && !L) break;
        if(!Z || !I) cout<<"Case "<<counter++<<": 1"<<endl;
        else
        {
            length =0;
            seed =(((Z%M)*(L%M))%M+I)%M;

            while(seed!=L)
            {
                if(!length) L = seed;
                L =(((Z%M)*(L%M))%M+I)%M;
                length++;

            }
            cout<<"Case "<<counter++<<": "<<length<<endl;

        }

    }
    return 0;
}
