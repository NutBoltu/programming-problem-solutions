#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int bytes,totalTransferred,b,totalTime;
    int DataSet =1;

    while(cin>>bytes && bytes)
    {
        totalTime=totalTransferred=0;
        printf("Output for data set %d, %d bytes:\n",DataSet++,bytes);
        while(bytes!=0)
        {
            cin>>b;

            totalTransferred+=b;
            bytes-=b;
            ++totalTime;
            if(!(totalTime%5))
            {
                if(!totalTransferred) printf("   Time remaining: stalled\n");
                else
                {
                    double remainTime = (5.0*(double)bytes)/(double)totalTransferred;

                    printf("   Time remaining: %d seconds\n",int(ceil(remainTime)));
                    totalTransferred=0;
                }
            }
        }
        printf("Total time: %d seconds\n\n",totalTime);
    }
    return 0;
}
