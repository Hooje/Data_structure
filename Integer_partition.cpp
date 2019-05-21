@@ -0,0 +1,23 @@
#include<iostream>
using namespace std;

int main()
{
	int n, m, M;//n=m1+m2+...
	cin>>n>>m>>M;
	int dp[1000][1000]={1};
	dp[0][0]=1;
	for (int i = 1; i <=m; ++i)  //least of division is 1
	{
		for (int j=0; j<=n; ++j)
		{
			if (i>=i)
			{
				dp[i][j]=(dp[i-1][j]+dp[i][j-i])%M;
			}
			else dp[i][j]=dp[i-1][j];
		}
	}
	cout<<dp[m][n];
	return 0;
}