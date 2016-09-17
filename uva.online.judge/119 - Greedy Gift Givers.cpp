#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;


int FindPerson(string list[],string Person,int num)
{
     int i;
     for( i=0;i<num;i++)
     {
        if(Person.compare(list[i])==0) return i;

     }
    return -1;
}
int main()
{
    int numofPeople;


    bool line = false;
    while((scanf("%d",&numofPeople)!=EOF))
    {
        if(line) {cout<<endl;}
        line = true;

        string Name[15];
        string Giver,receiver;
        int amount,numofReceiver;
        int netGain[15];

        for(int i=0;i<numofPeople;i++) {cin>>Name[i];netGain[i]=0; }
        for(int i=0;i<numofPeople;i++)
        {
                cin>>Giver>>amount>>numofReceiver;
                if(numofReceiver!=0)
                {
                    int temp = amount/numofReceiver;

                    int index=FindPerson(Name,Giver,numofPeople);
                    netGain[index] -= (temp*numofReceiver);

                    for(int j=0;j<numofReceiver;j++)
                    {
                        cin>>receiver;
                        index=FindPerson(Name,receiver,numofPeople);
                         netGain[index] += temp;

                    }

                }


        }
        /*Output*/
        for(int i=0;i<numofPeople;i++)
        {
            cout<<Name[i]<<" "<<netGain[i]<<endl;

        }



    }


    return 0;
}
