@@ -0,0 +1,36 @@
#include<iostream>
#include<memory.h>
using namespace std;

int n=3;
int a[3]={3, 5, 8};//value
int m[3]={3, 2, 2};//number

int dp[10];

int main()
{
	int k;
	cin>>k;
	memset(dp, -1, sizeof(dp));
	
	dp[0]=0;

	for (int i = 0; i < n; ++i)
	{
		for (int j=0; j<=k ; ++j)
		{
			if (dp[j]>=0)
			{
				dp[j]=m[i];
			}
			else if(j>=a[i]&&dp[j-a[i]]>0)
				dp[j]=dp[j-a[i]]-1;
		}
	}

	if(dp[k]>=0)
		cout<<"yes";
	else cout<<"no";
	return 0;
}