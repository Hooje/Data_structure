@@ -0,0 +1,29 @@
#include<iostream>
using namespace std;

void perm(char *list, int i, int n)
{
	if(i==n)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<list[j];
		}
		cout<<endl;
	}
	else
	{
		for (int j = 0; j < n; ++j)
		{
			swap(list[i], list[j]);
			perm(list, i+1, n);
			swap(list[i], list[j]);
		}
	}
}
int main()
{
	char A[5]={'a', 'b', 'c', 'd', 'e'};
	perm(A, 0, 5);
	return 0;
}