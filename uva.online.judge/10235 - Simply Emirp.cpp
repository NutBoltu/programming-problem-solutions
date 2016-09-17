#include<iostream>
#include<cmath>
using namespace std;


long int reverse(long int num)
{
    long int rev=0;
    while(num>0)
    {
        rev = 10*rev +num%10;
        num/=10;
    }

    return rev;
}

bool isPrime(long int num)
{
    bool isP=true;

    for(long int i=3;i<=sqrt(num);i=i+2)
    {
        if(!(num%i)) {isP=false;break;}
    }
    return isP;
}

int main()
{
    long int N;
    bool RevPrime,Prime;
    while(cin>>N)
    {
        RevPrime=false;
        Prime=false;
        if(N==2) Prime = true;
        else if(!(N%2)|| N==1) Prime = false;
        else
        {
            Prime = isPrime(N);
            long int R = reverse(N);
            if(R!=N && (R%2) && Prime) RevPrime = isPrime(R);
        }
        if(RevPrime && Prime) cout<<N<<" is emirp."<<endl;
        else if(Prime) cout<<N<<" is prime."<<endl;
        else  cout<<N<<" is not prime."<<endl;


    }
    return 0;
}
