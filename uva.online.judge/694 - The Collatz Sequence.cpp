#include<iostream>
#include<cstdio>

using namespace std;

long long  L;

long long numofTerms(long long a,long long t)
{
    if(a ==1)return t;
    if(a>L) return --t;
    if(!(a%2)) return numofTerms(a/2,++t);
    return numofTerms(3*a+1,++t);
}

int main ()
{
    long long A,terms,count =1;

    while(cin>>A>>L)
    {
        if(A<0 && L<0 ) break;
        terms = numofTerms(A,1);
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",count++,A,L,terms);

    }

    return 0;
}
