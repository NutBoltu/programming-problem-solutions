#include<cstdio>
#include<cmath>
int main()
{
    long int amount,tax;
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%ld",&amount);
        tax=0;

        amount-=180000;
        if(amount>300000)
        {

            amount-=300000;
            tax+=ceil(300000.0*0.10);
            if(amount>400000)
            {
                amount-=400000;
                tax+=ceil(400000.0*0.15);
                if(amount>300000)
                {
                    amount-=300000;
                    tax+=ceil(300000.0*0.20)+ceil(amount*0.25);

                }
                else
                {

                    tax+=ceil(amount*0.20);
                }
            }
            else
            {

               tax+=ceil(amount*0.15);
            }
        }
        else if(amount>0)
        {

            tax+=ceil(amount*0.10);
        }


          if(tax<2000 && tax!=0)   printf("Case %d: 2000\n",i);
          else printf("Case %d: %ld\n",i,tax);
    }


    return 0;
}
