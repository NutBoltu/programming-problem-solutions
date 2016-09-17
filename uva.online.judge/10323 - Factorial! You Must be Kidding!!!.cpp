#include<iostream>
#include<cstdio>
 using namespace std;

 long long int factorial(long long int n)
 {
    if(n==1) return 1;
    return n*factorial(n-1);
}
 int main()
 {
   long long int n,fact;

    while(cin>>n)
    {
        if(n<0 && !(n%2)) printf("Underflow!\n");
        else if(n<0 && n%2) printf("Overflow!\n");
        else
        {
            if(n<8) printf("Underflow!\n");
            else if(n>13) printf("Overflow!\n");
            else
            {
                printf("%lld\n",factorial(n));
            }

        }

    }





 }
