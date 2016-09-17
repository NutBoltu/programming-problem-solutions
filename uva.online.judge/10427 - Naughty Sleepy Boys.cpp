#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    unsigned long    Digits[11]={0,9,189,2889,38889,488889,5888889,68888889,788888889};
    unsigned long    start[11]= {1,10,100,1000,10000,100000,1000000,10000000,100000000};
    unsigned long  N,m,k;

    while(cin>>N)
    {
        m=0;
        for(int i=0;i<11;i++)
        {
            if(N<Digits[i])
            {
                    m=N-Digits[i-1];
                    k=i-1;
                    break;
            }

        }

        int d = log10(start[k])+1;
        if(d==1) cout<<N<<endl;
        else
        {
                unsigned long   x = (m/d);
                if(x*d==m) x--;
                unsigned long  num = start[k]+x;

                int p =m%d;
                if(!p) cout<<num%10<<endl;
                else
                {
                      num=num/start[d-p];
                      cout<<num%10<<endl;
                }
        }

    }

   return 0;
}
