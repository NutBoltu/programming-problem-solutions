#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int L,num[1010],temp;

    while(cin>>L)
    {

        for(int i=0;i<L;i++) cin>>num[i];
        int swap=0;
        for(int i=0;i<L-1;i++)
        {   for(int j=1;j<L-i;j++)
            {
                    if(num[j-1]>num[j])
                    {
                        temp=num[j];
                        num[j]=num[j-1];
                        num[j-1]=temp;
                        swap++;
                    }
            }
        }
        printf("Minimum exchange operations : %d\n",swap);

    }

    return 0;
}
