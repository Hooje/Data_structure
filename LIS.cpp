@@ -0,0 +1,32 @@
#include<iostream>
using namespace std;

int main()
{
	int n=5;
	int A[5]={0};
	int x;

	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		A[i]=x;
	}

	int dp[10]={0};
	int res=0;
	for (int i = 0; i < n; ++i)
	{
		dp[i]=1;
		for (int j = 0; j < i; ++j)
		{
			if (A[j]<A[i])
			{
				dp[i]=max(dp[i], dp[j]+1);
			}
			res=max(res, dp[i]);
		}
	}
	cout<<res;
	return 0;
}