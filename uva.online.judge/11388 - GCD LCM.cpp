#include<iostream>
 using namespace std;

 int main()
 {
     int testcase;
     long int gcd,lcm;
     cin>>testcase;
     while(testcase--)
     {
         cin>>gcd>>lcm;
         if(lcm%gcd == 0)
            cout<<gcd<<" "<<lcm<<endl;
         else cout<<"-1"<<endl;
     }

     return 0;
 }
