#include<iostream>
#include<cmath>
using namespace std;
long long streetNumbers[11][2];
void FindStreetNumber()
{
    int counter = 0;
    long long i=3,prevalue = 0;
    double last,compare;
    while(counter<10)
    {
        prevalue = i*(i-1)/2;
        last = (sqrt(1+4.0*(i*i+i+2*prevalue))-1)/2;
        compare = last-(long long)last;
        if(compare == 0)
        {
            streetNumbers[counter][0] = i;
            streetNumbers[counter++][1] = (long long)last;
        }
        i++;
    }

}
void printValue(long long n)
{
    int digit = log10(n)+1;
    for(int i=0;i<10-digit;i++) cout<<" ";
    cout<<n;
}
int main()
{
    FindStreetNumber();
    for(int i=0;i<10;i++)
    {
        printValue(streetNumbers[i][0]);
        printValue(streetNumbers[i][1]);
        cout<<endl;
    }
}
