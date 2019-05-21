@@ -0,0 +1,27 @@
#include<iostream>
using namespace std;


int binary_search(int list[], int search, int left, int right)
{
	int middle;
	while(left<=right)
	{
		middle=(left+right)/2;
		if(search>list[middle])
			left=middle+1;
		else if(search<list[middle])
			right=middle-1;
		else return middle;
	}
	return -1;
}
int main()
{
	int A[4]={1, 2, 5, 80};
	int x, n;
	cin>>x;
	n=binary_search(A, x, 0, 3);
	cout<<n;
	return 0;
}