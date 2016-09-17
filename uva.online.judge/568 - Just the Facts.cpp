#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
 int prime[5001],numofFreq[10001],primefactor[5001];
bool IsPrime(int num,int c)
{
    for(int i=0;i<c;i++)
    {
        if(!(num%prime[i])) return false;
    }

    return true;
}
int GeneratePrimes()
{
    int counter=0;
    prime[counter++] = 2;
    for(int i=3;i<=10000;i+=2)
    {
        if(IsPrime(i,counter)) prime[counter++] = i;
    }
    return counter;
}
 int main()
 {
     int counter = GeneratePrimes();
     int N,index,factor,freqCounter,p,facCounter,minValue,temp,numofSpace;
     long long unitDigit;
     while(cin>>N)
     {
         index =0;
         facCounter=0;
         memset(primefactor,0,sizeof(primefactor));
         memset(numofFreq,0,sizeof(numofFreq));
         while(prime[index]<=N)
         {
             if(index == counter) break;
            factor = prime[index];
            freqCounter =0;
            p=1;
            while((N/factor)>0)
            {
                freqCounter += N/factor;
                factor = pow(prime[index],++p);

            }

            numofFreq[prime[index]] = freqCounter;
            primefactor[facCounter++] = prime[index];
            index++;
         }
         minValue = min(numofFreq[2],numofFreq[5]);
         numofFreq[2]-=minValue;
         numofFreq[5]-=minValue;

         unitDigit=1;
         for(int i=0;i<facCounter;i++)
         {
            temp = ((int)pow((primefactor[i]%10),((numofFreq[primefactor[i]]-1)%4)+1))%10;

             unitDigit*=temp;
             unitDigit=unitDigit%10;
         }
         numofSpace =5-floor(log10(N)+1);

         for(int i=0;i<numofSpace;i++) cout<<" ";
         cout<<N<<" -> "<<(unitDigit%10)<<endl;

     }
     return 0;

 }
