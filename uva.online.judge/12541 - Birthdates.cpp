#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    int year,month,day,T,Y,O;
    long int date;
    string name[100];
    cin>>T;
    long int max=-99999999,min=99999999;
    for(int i=0;i<T;i++)
    {
        cin>>name[i]>>day>>month>>year;
        date =year*10000+month*100+day;

        if(date>max) max=date,Y=i;
        if(date<min) min=date,O=i;
    }
        cout<<name[Y]<<endl;
        cout<<name[O]<<endl;
    return 0;
}
