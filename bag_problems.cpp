@@ -0,0 +1,38 @@
#include<iostream>
#include<map>
using namespace std;

int main()
{
	int x, y, z, w;
	map<int, int> coin;
	cin>>x>>y>>z>>w;
	int A[3]={3, 4, 2};
	coin[A[0]]=x;
	coin[A[1]]=y;
	coin[A[2]]=z;

	int dp[10][10]={0};

	for (int i = 0; i <= w; ++i)
	{
		dp[0][i]=0;
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j<=w; ++j)
		{
			if (j<A[i])
			{
				dp[i+1][j]=dp[i][j];
			}
			else
				dp[i+1][j]=max(dp[i][j], dp[i+1][j-A[i]]+coin[A[i]]);
		}
	}
	cout<<dp[3][w];


	return 0;
}