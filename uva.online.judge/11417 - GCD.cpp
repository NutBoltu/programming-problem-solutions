   #include <iostream>
   using namespace std;
int GCD(int p,int q)
{
	if(q==0) return p;
	if(q>p) return GCD(q,p);
	return GCD(q,p%q);
} 

   int main()
   {
      int N,G;
      while(cin>>N)
      {
      	if(!N) break;
      	G=0;
      	for(int i=1;i<N;i++)
      	{
      		for(int j=i+1;j<=N;j++)
      		{
      			G+=GCD(i,j);
      		}
      	}
      	cout<<G<<endl;
      }
      
      return 0;
   }
   