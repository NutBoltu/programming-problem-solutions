#include<iostream>
#include<cmath>
using namespace std;

int main()
{
     double N,P,X,Y;
     unsigned long long int Sq;
    while(cin>>N)
    {
        if(!N) break;
        Sq=sqrt(N);
        if(Sq*Sq==N)
        {

            if(!(Sq%2)) cout<<Sq<<" "<<1<<endl;
            else cout<<1<<" "<<Sq<<endl;;
        }
        else
        {
            Sq=floor(Sq);
            P=Sq*(Sq+1)+1;
            if(N==P) X=Sq+1,Y=Sq+1;
            else if(N>P) X=Sq+1-(N-P),Y=Sq+1;
            else if(N<P) X=Sq+1,Y=Sq+1-(P-N);
            if((!(Sq%2)))cout<<X<<" "<<Y<<endl;
            else cout<<Y<<" "<<X<<endl;
        }



    }


    return 0;
}
