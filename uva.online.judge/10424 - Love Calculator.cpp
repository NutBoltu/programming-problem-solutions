#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int digitSum(int num)
{
    while(num>9)
    {
        int s=num;
        num=0;
        while(s>0)
        {
            num+=s%10;
            s/=10;
       }

    }
    return num;
}
int main()
{
    char sample[30];
    bool showOutput= false;
    int sum,a,b;
    while(cin.getline(sample,30))
    {
        sum =0;
        for(int i=0;i<strlen(sample);i++)
        {
            int t= (int)sample[i];
            if(t>=65 && t<=90) sum+=t-64;
            else if (t>=97 && t<=122) sum+=t-96;
        }

         sum =digitSum(sum);

        if(showOutput)
        {
            showOutput=false;
            b=sum;
            float res;
            if(a>b) res= (b*100.00)/a;
            else res= (a*100.00)/b;
            printf("%.2f %%\n",res);

        }
        else
        {
            showOutput=true;
            a=sum;

        }

    }
    return 0;
}
