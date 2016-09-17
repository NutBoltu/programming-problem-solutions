#include<iostream>
#include<cstring>
#define minRange -128

using namespace std;
int _Array[101][101];

int Kadane(int arr[],int N)
{
    int mSum =minRange,cSum = minRange;
    mSum = cSum = arr[0];
    for(int i=1;i<N;i++)
    {
        if(cSum+arr[i]>arr[i]) cSum += arr[i];
        else cSum = arr[i];
        if(cSum>mSum) mSum = cSum;
    }

    return mSum;
}


int FindMaxSum(int N)
{
    int prefixSum[N];
    int maxSum = minRange,currentSum = minRange;
    for(int left=0;left<N;left++)
    {
        memset(prefixSum,0,sizeof(prefixSum));
        for(int right = left;right<N;right++)
        {
            for(int i=0;i<N;i++) prefixSum[i]+=_Array[i][right];
            currentSum = Kadane(prefixSum,N);
            if(currentSum>maxSum) maxSum = currentSum;
        }

    }


   return maxSum;
}


int main()
{
    int N;

    while(cin>>N)
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++) cin>>_Array[i][j];
        }
        cout<<FindMaxSum(N)<<endl;

    }

    return 0;
}
