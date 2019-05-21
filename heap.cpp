#include<iostream>
using namespace std;

int size=0;
int heap[1000];
void push(int x)
{
	int i=size++;
	while(i>0)
	{
		int p=(i-1)/2;
		if (heap[p]<=x)
			break;
		heap[i]=heap[p];
		i=p;
	}
	heap[i]=x;
}
void pop()
{
	int ret=heap[0];
	int x=heap[--size];
	int i=0;
	while(i*2+1<size)
	{
		int a=i*2+1, b=i*2+2;
		if (b<size&&heap[b]<heap[a])
		{
			a=b;
		}
		if (heap[a]>=x)
			break;
		heap[i]=heap[a];
		i=a;
	}
	heap[i]=x;
	//return ret;
}

int main()
{
	//int count=0;
	int x, y;
	while(cin>>x)
	{
		if(x==1)
		{
			cin>>y;
			push(y);
		}
		if(x==2)
		{
			cin>>y;
			pop();
		}
		//count++;
	}

	for (int i = 0; i <= size; ++i)
	{
		cout<<heap[i];
	}

	return 0;
}